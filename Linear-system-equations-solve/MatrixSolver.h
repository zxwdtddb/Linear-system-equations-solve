// MatrixSolver.h
#ifndef MATRIXSOLVER_H
#define MATRIXSOLVER_H

#include <QVector>

class MatrixSolver {
public:
    MatrixSolver();  // 构造函数

    // 高斯消元法的主函数，返回是否成功（成功返回 true，失败返回 false）
    bool gauss(QVector<QVector<double>>& a, QVector<double>& x, int n);

private:
    // 辅助函数，用于实现高斯消元中的矩阵行操作
    void linePlus(QVector<QVector<double>>& a, int m, int n, double k, int N);
    void lineSwap(QVector<QVector<double>>& a, int m, int n, int N);
    void lineMult(QVector<QVector<double>>& a, int n, double k, int N);

    // 其他辅助函数
    void solveX(QVector<QVector<double>>& a, QVector<double>& x, int n);  // 计算解
    double Abs(double x);  // 计算绝对值
};

#endif // MATRIXSOLVER_H

