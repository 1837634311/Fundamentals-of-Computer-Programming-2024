/*
求圆周率π的近似值，当通项 1/(2n-1) 小于 10-6 时结束。
要求：用指针操作变量，即用指针方式访问 PI 与新项对应的变量
*/
#include <iostream>
using namespace std;

int main() {
    int n = 1, sign = 1;
    double pi = 0, item = 1;
    // 指向圆周率pi的地址，指向项的地址
    double* PI = &pi, * term = &item;
    while (*term >= 1e-6) {
        *term = 1.0 / (2 * n - 1);
        *PI += *term * sign;
        n++; sign = -sign;
    }
    cout << "PI的近似值为：" << *PI * 4;

    cout << endl;
    return 0;
}
