/*
计算，根号下5倍sinx的绝对值+8
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x, y, result;
    float const PI = 3.141593;
    cout << "请输入一个角度值：";
    cin >> x;
    y = x * PI / 180;
    result = sqrt(fabs(5 * sin(y)) + 8);
    cout << "计算结果为：" << result << endl;
    return 0;
}
