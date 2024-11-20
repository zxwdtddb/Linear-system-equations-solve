// form.cpp
#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent)
    : QWidget(parent), ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::showMatrix(const QVector<QVector<double>>& a)
{
    QString matrixStr;
    for (const auto& row : a) {
        for (double val : row) {
            matrixStr += QString::number(val, 'f', 5) + "\t";
        }
        matrixStr += "\n";
    }
    ui->matrixTextEdit->setText(matrixStr);
}

void Form::showSolution(const QVector<double>& x)
{
    QString solutionStr;
    for (int i = 0; i < x.size(); ++i) {
        solutionStr += QString("x%1 = %2\n").arg(i + 1).arg(x[i], 0, 'f', 5);
    }
    ui->solutionTextEdit->setText(solutionStr);
}

void Form::showError(const QString& errorMessage)
{
    ui->solutionTextEdit->setText(errorMessage);  // 显示错误消息
}


