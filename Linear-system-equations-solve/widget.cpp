#include "widget.h"
#include "ui_widget.h"
#include "form.h"
#include "matrixsolver.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent), ui(new Ui::Widget), isMatrixInitialized(false)  // 初始化标志位
{
    ui->setupUi(this);

    // 连接 pushButton（第一次点击按钮）
    connect(ui->pushButton, &QPushButton::clicked, this, &Widget::on_pushButton_clicked);

    // 连接 pushButton2（第二次点击按钮）
    connect(ui->pushButton2, &QPushButton::clicked, this, &Widget::on_pushButton2_clicked);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    // 第一次点击，初始化 tableWidget 并允许用户输入数据
    int n = ui->lineEdit->text().toInt();  // 获取输入的矩阵阶数

    if (n <= 0) {
        ui->textEdit->setText("请输入有效的矩阵阶数");
        return;
    }

    // 设置 tableWidget 的行数和列数
    ui->tableWidget->setRowCount(n);
    ui->tableWidget->setColumnCount(n + 1);  // 增广矩阵有 n + 1 列

    // 确保每个单元格是可编辑的
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= n; ++j) {
            ui->tableWidget->setItem(i, j, new QTableWidgetItem());  // 初始化单元格项
        }
    }

    // 提示用户输入矩阵
    ui->textEdit->setText("请在表格中输入矩阵，完成后点击第二个确认按钮");

    // 标志位设置为 true，表示下一次点击将读取输入数据
    isMatrixInitialized = true;
}

void Widget::on_pushButton2_clicked()
{
    if (!isMatrixInitialized) {
        ui->textEdit->setText("请先点击第一个按钮进行矩阵初始化！");
        return;
    }

    // 第二次点击，读取输入数据并继续执行高斯消元
    int n = ui->lineEdit->text().toInt();  // 获取输入的矩阵阶数

    QVector<QVector<double>> a(n, QVector<double>(n + 1));  // 增广矩阵
    QVector<double> x(n);  // 用于存储解

    // 读取矩阵数据
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= n; ++j) {
            QTableWidgetItem* item = ui->tableWidget->item(i, j);
            if (item) {
                a[i][j] = item->text().toDouble();  // 将单元格中的文本转换为 double
            } else {
                ui->textEdit->setText("请完整输入矩阵");
                return;
            }
        }
    }

    // 高斯消元
    MatrixSolver solver;
    bool success = solver.gauss(a, x, n);

    // 创建并显示第二个窗口
    Form *formWindow = new Form(this);
    if (success) {
        formWindow->showMatrix(a);  // 显示简化后的矩阵
        formWindow->showSolution(x);  // 显示解
    } else {
        formWindow->showMatrix(a);  // 显示部分结果
        formWindow->showError("计算错误");  // 显示错误消息
    }
    formWindow->show();

    // 重置标志位，允许下次点击重新初始化矩阵输入
    isMatrixInitialized = false;
}






