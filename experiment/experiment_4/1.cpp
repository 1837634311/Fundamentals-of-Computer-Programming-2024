/*
从键盘输入一系列正整数(输入0或负数表示结束)，分别统计这些数中奇数、偶数的个数。
要求使用while语句。
*/
#include <iostream>
using namespace std;
int main() {
    short n, odd = 0, even = 0;
    cout << "请输入一系列正整数（输入0或负数表示阶数）：" << endl;
    cin >> n;
    while (n > 0) {
        if (n % 2 == 0) even++;
        else odd++;
        cin >> n;
    }
    cout << "奇数个数：" << odd << endl;
    cout << "偶数个数：" << even << endl;
    return 0;
}
