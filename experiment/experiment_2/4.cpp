/*
从键盘输入一个整数，使用双分支结构（if…else）判断其是否能被3整除；
再使用双分支结构（if…else）判断其是否不能被5整除（要求使用“不等于”运算符）。
*/
#include <iostream>
using namespace std;
int main() {
    short x, i = 1;
    cout << "请输入一个整数：";
    cin >> x;
    if (x % 3 != 0) {    // 根据 x 的余数情况来判断是否能被整除。使用“不等于”判断。
        cout << x << " 不能被 3 整除" << endl;
    } else {
        cout << x << " 能被 3 整除" << endl;
    }
    if (x % 5 != 0) {
        cout << x << " 不能被 5 整除";
    } else {
        cout << x << " 能被 5 整除";
    }
    return 0;
}
