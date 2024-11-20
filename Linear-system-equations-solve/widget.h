#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_clicked();  // 第一次点击的槽函数
    void on_pushButton2_clicked();  // 第二次点击的槽函数

private:
    Ui::Widget *ui;
    bool isMatrixInitialized;  // 用于判断是否已经初始化矩阵输入
};

#endif // WIDGET_H

