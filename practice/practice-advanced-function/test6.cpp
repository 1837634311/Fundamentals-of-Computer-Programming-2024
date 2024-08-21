/* 编程实现求另外数的最大公约数。子函数实现用辗转相除法求最大公约数的功能。

【输出】
请输入两个正整数：30 27
30和27的最大公约数是：3
30和27的最小公倍数是：270
*/

#include <iostream>
using namespace std;
/*******************Program******************/
//子函数实现：求最大公约数和最小公倍数
void GCD_LCM(int p, int q, int& m, int& n) {
    int r, a = p, b = q;
    do {
        // 计算余数 r
        r = a % b;
        // 除数作 a，余数作 b，直到 b 能被 a 整除
        a = b;
        b = r;
    } while (r > 0);
    // a 就是最大公倍数
    m = a;
    // 计算最小公倍数
    n = p * q / a;
}
/*********************End********************/

int main() {
    int p, q, m = 0, n = 0;     //注意变量的初始化
    cout << "请输入两个正整数：";
    cin >> p >> q;
    GCD_LCM(p, q, m, n);          //调用函数	
    cout << p << "和" << q << "的最大公约数是：" << m << endl;
    cout << p << "和" << q << "的最小公倍数是：" << n << endl;
    return 0;
}
