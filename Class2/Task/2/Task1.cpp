#include <iostream>

using namespace std;

#include <ctime>
// Eigen 核心部分
#include <Eigen/Core>
// 稠密矩阵的代数运算（逆，特征值等）
#include <Eigen/Dense>

using namespace Eigen;

#define MATRIX_SIZE 100

/****************************
* 本程序演示了 Eigen 基本类型的使用
****************************/

int main(int argc, char **argv) {
    // 解方程
    // 我们求解 matrix_NN * x = v_Nd 这个方程
    // N的大小在前边的宏里定义，它由随机数生成
    // 直接求逆自然是最直接的，但是求逆运算量大

     Matrix<double, MATRIX_SIZE, MATRIX_SIZE> matrix_NN
               = MatrixXd::Random(MATRIX_SIZE, MATRIX_SIZE);
     matrix_NN = matrix_NN * matrix_NN.transpose();  // 保证半正定
     Matrix<double, MATRIX_SIZE, 1> v_Nd = MatrixXd::Random(MATRIX_SIZE, 1);

     clock_t time_stt = clock(); // 计时
     // 直接求逆
     Matrix<double, MATRIX_SIZE, 1> x = matrix_NN.inverse() * v_Nd;
     cout << "time of normal inverse is "
          << 1000 * (clock() - time_stt) / (double) CLOCKS_PER_SEC << "ms" << endl;
     cout << "x = " << x.transpose() << endl;

     // 通常用矩阵分解来求，例如QR分解，速度会快很多
     time_stt = clock();
     x = matrix_NN.colPivHouseholderQr().solve(v_Nd);
     cout << "time of Qr decomposition is "
          << 1000 * (clock() - time_stt) / (double) CLOCKS_PER_SEC << "ms" << endl;
     cout << "x = " << x.transpose() << endl;

     // 对于正定矩阵，还可以用cholesky分解来解方程
     time_stt = clock();
     x = matrix_NN.ldlt().solve(v_Nd);
     cout << "time of ldlt decomposition is "
          << 1000 * (clock() - time_stt) / (double) CLOCKS_PER_SEC << "ms" << endl;
     cout << "x = " << x.transpose() << endl;

     return 0;
}