/* 求表达式的值：sum= 2/1-3/2+5/3-8/5+13/8-21/13……

编程要求：
1、请在注释信息Program和End之间完成代码，程序其余位置的代码不要改动！
2、编程时，只能使用已定义的变量
3、程序只能使用规定的结构，本题要求循环用for语句实现。

【输出】
请输入项数n的值：5
sum=2.19167
*/

#include <iostream>
using namespace std;
int main()
{
    int i, n, sign = 1;
    float sum = 0, t1 = 2, t2 = 1;
    cout << "请输入项数n的值：";
    cin >> n;
    /*************************Program***************************/
    for (i = 1; i <= n; i++) {
        sum += sign * (t1 / t2);
        t1 += t2;
        t2 = t1 - t2;
        sign = -sign;
    }
    /*************************End***************************/
    cout << "sum=" << sum << endl;
    return 0;
}