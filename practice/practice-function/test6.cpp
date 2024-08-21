/*  用迭代法计算x的y次幂
【运行结果】
请输入x和n的值: 3 2             请输入x和n的值: 0 2                 请输入x和n的值: 5.34 0
3的2次幂为：9                   0的任何次幂结果为0                  任何数的0次幂结果为1

编程要求：
1、请在注释信息Program和End之间完成代码，程序其余位置的代码不要改动！
2、请完成子函数功能。子函数中循环要求用for语句实现。

*/
#include <iostream>
using namespace std;
//子函数定义，求x的y次幂
/*******************Program******************/
double power(double x, int y) {
    // 初始化变量val为1
    int val = 1;
    // 当y大于0时，执行循环
    for (; y > 0; y--)
        // 每次循环时，val乘以x
        val *= x;
    // 返回val的值
    return val;
}
/*********************End********************/
int main()
{
    double x, y;
    int n;
    cout << "请输入x和n的值:";
    cin >> x >> n;
    cout << fixed;
    cout.precision(2);
    if (x == 0)
        cout << "0的任何次幂结果为0" << endl;
    else
        if (n == 0)
            cout << "任何数的0次幂结果为1" << endl;
        else
        {
            y = power(x, n);
            cout << x << "的" << n << "次幂为:" << y << endl;
        }
    return 0;
}

