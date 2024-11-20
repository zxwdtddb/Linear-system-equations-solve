#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QVector>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

    void showMatrix(const QVector<QVector<double>>& a);  // 显示行化简后的矩阵
    void showSolution(const QVector<double>& x);  // 显示方程组的解
    void showError(const QString& errorMessage);  // 显示错误消息

private:
    Ui::Form *ui;
};

#endif // FORM_H
