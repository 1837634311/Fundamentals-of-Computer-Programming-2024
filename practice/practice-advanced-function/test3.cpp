/*  用递归法计算x的y次幂

编程要求：
1、请在注释信息Program和End之间完成代码，程序其余位置的代码不要改动！
2、请完成子函数定义。

【输出】
请输入x和n的值: 3 4
3的4次幂为：81
*/
#include <iostream>
using namespace std;
//求x的y次幂，用递归法实现
/*********************Program********************/
double power(double x, int n) {
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    else if (n > 0)
        return x * power(x, n - 1);
    else
        return 1 / x * power(x, n + 1);
}
/*********************End********************/
int main() {
    double x, y;
    int n;
    cout << "请输入x和n的值:";
    cin >> x >> n;
    cout << fixed;
    cout.precision(2);
    y = power(x, n);
    cout << x << "的" << n << "次幂为:" << y << endl;
    return 0;
}

