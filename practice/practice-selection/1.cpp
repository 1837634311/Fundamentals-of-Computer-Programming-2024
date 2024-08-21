/*  编程实现：四则运算简易计算器。
从键盘输入运算数和运算符，根据运算符进行四则运算（+、-、*、/),需要考虑除数为0的情况，以及输入的非四则运算符的情况
输入：3 + 5               输入：5 / 0              输入：5/4          输入：5 & 7
输出：3+5=8               输出：除数为0！          输出：1            输出：非四则运算！

编程要求：
1、请在注释信息Program和End之间完成代码，程序其余位置的代码不要改动！
2、编程时，只能使用已定义的变量，不再另外定义变量。
3、程序只能使用规定的结构，本题要求用 if-else 或 switch 实现。
*/

#include<iostream>
using namespace std;
int main()
{
    int op1, op2;                          //定义两个操作符
    char oper;                            //定义运算符
    cin >> op1 >> oper >> op2;                  //数据输入顺序：操作数1、操作符、操作数2       
    /*************************Program***************************/
    switch (oper) {
    case '+':
        cout << op1 << oper << op2 << "=" << op1 + op2 << endl;
        break;
    case '-':
        cout << op1 << oper << op2 << "=" << op1 - op2 << endl;
        break;
    case '*':
        cout << op1 << oper << op2 << "=" << op1 * op2 << endl;
        break;
    case '/':
        if (op2 == 0) cout << "除数为0！" << endl;
        else cout << op1 / op2 << endl;
        break;
    default:
        cout << "非四则运算符！" << endl;
        break;
    }
    /*************************End***************************/
    return 0;
}