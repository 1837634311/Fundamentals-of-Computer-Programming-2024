// 计算 cos 函数 （附加题，不是实验报告内容）
#include <iostream>
#include <cmath>
using namespace std;

long long factorial(int n) {    // 计算阶乘
    if (n == 0) return 1;    // 0的阶乘是1
    long long out = 1;
    for (int i = 1; i <= n; i++)
        out *= i;
    return out;
}

int main() {
    short x, i = 0;
    double temp, numerator, denominator, value = 0.0, y;
    const double pi = 3.14159265;
    cout << "请输入角度值：";
    cin >> x;
    y = x * pi / 180;    // 将角度转换为弧度

    do {
        numerator = pow(y, i);    // 计算新项的分子
        denominator = factorial(i);    // 计算新项的分母
        temp = (i % 4 == 0 ? 1 : -1) * (numerator / denominator);    // 根据 i 的值确定符号
        value += temp;
        i += 2;    // 只使用偶数幂
    } while (fabs(temp) >= 10e-7);    // 当新添加项的精度小于 10e-7 时，满足截断误差

    cout << "cos(" << x << ") = " << value << endl;
    //都用<cmath>了，不如直接 cos(y)
    cout << "cos(" << x << ") = " << cos(y) << endl;
    return 0;
}