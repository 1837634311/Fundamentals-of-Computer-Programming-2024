/*
假设三年期存款年利率rate为3.4%，输入存款本金，计算三年期存款到期后的本息和，并输出。要求本息和保留两位小数。
*/
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float a;
    cout << "请输入存款本金（元）：";
    cin >> a;
    a = a * (1 + 0.034 * 3);    // 计算三年后的本息和
    cout.precision(7);          // 设置输出精度，只适用于五位数和两位小数的情况
    cout << "三年后存款的本息和为：" << a << " 元。";
    return 0;
}