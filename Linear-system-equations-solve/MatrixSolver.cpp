// MatrixSolver.cpp
#include "MatrixSolver.h"
#include <cmath>

MatrixSolver::MatrixSolver() {}

double MatrixSolver::Abs(double x) {
    return x < 0 ? -x : x;
}

bool MatrixSolver::gauss(QVector<QVector<double>>& a, QVector<double>& x, int n)
{
    for (int i = 0; i < n; ++i) {
        double mainElement = a[i][i];
        if (Abs(mainElement) <= 1e-11) {
            return false;
        }

        for (int j = i + 1; j < n; ++j) {
            double k = a[j][i] / mainElement;
            linePlus(a, i, j, -k, n + 1);
        }
    }

    solveX(a, x, n);
    return true;
}

void MatrixSolver::solveX(QVector<QVector<double>>& a, QVector<double>& x, int n)
{
    x[n - 1] = a[n - 1][n] / a[n - 1][n - 1];
    for (int i = n - 2; i >= 0; --i) {
        double temp = 0.0;
        for (int j = i + 1; j < n; ++j) {
            temp += a[i][j] * x[j];
        }
        x[i] = (a[i][n] - temp) / a[i][i];
    }
}

void MatrixSolver::linePlus(QVector<QVector<double>>& a, int m, int n, double k, int N)
{
    for (int i = 0; i < N; ++i) {
        a[n][i] += a[m][i] * k;
    }
}

void MatrixSolver::lineSwap(QVector<QVector<double>>& a, int m, int n, int N)
{
    for (int i = 0; i < N; ++i) {
        qSwap(a[m][i], a[n][i]);
    }
}

void MatrixSolver::lineMult(QVector<QVector<double>>& a, int n, double k, int N)
{
    for (int i = 0; i < N; ++i) {
        a[n][i] *= k;
    }
}

