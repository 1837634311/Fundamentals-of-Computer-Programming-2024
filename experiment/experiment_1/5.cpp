/*
计算地球与月球之间的万有引力。
万有引力的计算公式为：F=G×m1×m2/R2其中，万有引力常量G=6.67×10-11 N·m²/kg²，地球质量m1为5.965×10^24kg，月球质量m2为7.349×10^22kg，地月距离R为3.84×10^8m。
要求将G设置为符号常量，m1、m2、R从键盘输入。
*/
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float m1, m2, r, F, G = 6.67e-11;
    cout << "请输入地球的质量：";
    cin >> m1;
    cout << "请输入月球的质量：";
    cin >> m2;
    cout << "请输入地月距离：";
    cin >> r;
    F = G * m1 * m2 / pow(r, 2);    // 计算万有引力
    // cout.precision(6);              // 设定输出精度，小数点后 5 位
    cout << "地球与月球之间的万有引力为：" << F << " N" << endl;
    return 0;
}