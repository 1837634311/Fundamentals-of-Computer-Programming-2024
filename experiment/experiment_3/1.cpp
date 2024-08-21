/*
身体质量指数BMI是评估体重与身高比例的参考指数，是衡量人体胖瘦程度的标准之一。
BMI的计算公式：BMI=体重（kg）÷身高2（m）。
中国BMI指数标准：<18.5，偏瘦；18.5≤BMI<24，正常；24≤BMI<27，偏胖；27≤BMI<30，肥胖；30≤BMI<40，重度肥胖；≥40，极重度肥胖。
从键盘输入体重和身高，计算并输出BMI值（保留2位小数），再根据BMI值，判断这个人的胖瘦程度。
s要求使用if-else嵌套语句实现多路分支结构。
*/
#include <iostream>
using namespace std;
int main() {
    float a, b, c;
    cout.precision(4);    // 设置输出的小数位数
    cout << "请输入某人的体重（公斤）：";
    cin >> a;
    cout << "请输入某人的身高（厘米）：";
    cin >> b;
    c = a / b / b * 10000;    // 计算 BMI
    cout << "BMI = " << c << ",";
    if (c < 18.5)
        cout << "偏瘦！";
    else if (c < 24)
        cout << "正常！";
    else if (c < 27)
        cout << " 偏胖！";
    else if (c < 30)
        cout << " 肥胖！";
    else if (c < 40)
        cout << " 重度肥胖！";
    else
        cout << " 极重度肥胖！";

    cout << endl;
    return 0;
}
