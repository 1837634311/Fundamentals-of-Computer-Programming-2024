/* 根据下面的表达式求派的值，当通项小于1.0E-8停止计算
   sum=4*(1-1/3+1/5-1/7+........)        //派的值

编程要求：
1、请在注释信息Program和End之间完成代码，程序其余位置的代码不要改动！
2、编程时，只能使用已定义的变量
3、程序只能使用规定的结构，本题要求循环用for语句实现。

【输出】
sum=3.1416
*/

#include <iostream>
using namespace std;
int main()
{
    int i, sign = 1;
    float sum = 0, term = 1;
    /*************************Program***************************/
    for (i = 1; term > 1e-8; i++, sign = -sign) {
        sum += sign * term;
        term = 1.0 / (2 * i + 1);
    }
    /*************************End***************************/
    cout << "sum=" << sum * 4 << endl;
    return 0;
}