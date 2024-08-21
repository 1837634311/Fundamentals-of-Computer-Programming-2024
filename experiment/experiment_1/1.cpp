/*
输入某人的身高、体重，求其BMI。
BMI称为身体质量指数，是用体重（公斤）除以身高（米）的平方得出的值，
是目前国际上常用的衡量人体胖瘦程度以及是否健康的一个标准。
*/

#include <iostream>
using namespace std;
int main() {
    float a, b, c;
    cout << "请输入某人的体重（公斤）：";
    cin >> a;         // 获取体重
    cout << "请输入此人的体重（米）：";
    cin >> b;         // 获取身高
    c = a / b / b;    // 计算 BMI
    cout << "此人的身体质量指数为：" << c << " kg/m^2" << endl;
    return 0;
}