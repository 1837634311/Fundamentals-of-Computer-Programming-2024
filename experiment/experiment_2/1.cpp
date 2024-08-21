/*
从键盘输入2个整数，使用if语句的单分支结构（if）求出较小的数。使用条件运算符求出较大的数。
*/
#include <iostream>
using namespace std;
int main() {
    short a, b, temp, i = 1;
    cout << "请输入两个整数：";
    cin >> a >> b;
    if (a > b) {        // 单分支结构，判断 a b 的大小
        temp = a;
        a = b;
        b = temp;     // 通过一个中间变量来交换 a b 的值
    }
    cout << "较小数为 " << a << endl << "较大数为 " << b << endl;
    return 0;
}
