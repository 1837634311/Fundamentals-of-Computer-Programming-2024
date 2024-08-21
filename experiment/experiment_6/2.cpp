/*
输入一个角度值x，计算该角度的余弦值并输出。本题不能调用系统函数。
（1）主函数功能：输入一个角度值，调用子函数得到余弦值，并输出。
（2）子函数功能：将角度值参数转换为弧度值（π取值3.141593），并利用泰勒公式计算其余弦值。
     要求截断误差小于10-7，即通项式的值小于10-7时停止计算。
子函数有1个double型的形参，返回值为double型。
*/
#include <iostream>
using namespace std;

double cos(double);

int main() {
    cout << "请输入一个角度值：";
    double x;
    cin >> x;
    cout << "cos(" << x << ")=" << cos(x);
    return 0;
}

double cos(double x) {
    const float PI = 3.141593;
    double y, cosx = 1, term_cosx = 1;
    int sign = 1, n = 1;
    y = x * PI / 180;
    for (; term_cosx > 10e-7; n++) {
        sign = -sign; // 改变符号，实现正负项的交替相加
        term_cosx = term_cosx * y * y / (((n << 1) - 1) * (n << 1)); // 计算新项
        cosx += sign * term_cosx; // 计算余弦值
    }
    return cosx;
}