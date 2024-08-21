/*
求任意两个正整数的最大公约数和最小公倍数。
（1）主函数功能：输入两个任意正整数，调用子函数求最大公约数和最小公倍数，输出结果。
（2）子函数功能：求两个正整数的最大公约数和最小公倍数，函数声明如下：
void gcd_lcm(int x, int y, int &divisor, int &multiple);
*/
#include <iostream>
using namespace std;
void gcd_lcm(int x, int y, int& divisor, int& multiple);

int main() {
    int m, n, divisor, multiple;
    cout << "请输入两个正整数："; cin >> m >> n;
    multiple = m * n;    // 传入此值，用于计算最小公倍数
    gcd_lcm(m, n, divisor, multiple);
    cout << "正整数" << m << "和" << n << "的最大公约数为" << divisor << "，最小公倍数为" << multiple << endl;
    return 0;
}

void gcd_lcm(int x, int y, int& divisor, int& multiple) {
    if (y == 0) {    // 如果余数为0
        divisor = x;    // 则找到最大公约数
        multiple /= divisor;    // 得到最小公倍数
    } else
        gcd_lcm(y, x % y, divisor, multiple);
}
