/*
已知一个函数 y= 2x(x<10) && x/3+1(x≥10)
输入x的值，求解并输出相应的y值。
要求使用双分支结构(if…else)
*/
#include <iostream>
using namespace std;
int main() {
    float x, y;
    cout << "请输入 x 的值（实数）：";
    cin >> x;
    if (x < 10) {    // 判断 x 的大小，实现分支结构
        y = 2 * x;
    } else {        // 双分支结构
        y = x / 3 + 1;
    }
    cout << "y = " << y << endl;
    return 0;
}
