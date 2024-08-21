/*
从键盘输入三角形的三条边长，判断是否能构成三角形。
如果是，继续判断能构成哪种三角形（等边、等腰、一般），不需考虑是否能构成直角三角形。
提示：三角形的三边关系为：任意两边之和大于第三边，任意两边之差小于第三边。
要求使用if-else嵌套语句实现多路分支结构。
*/
#include <iostream>
using namespace std;
int main() {
    short a, b, c;
    cout << "请输入三角形的三条边长：";
    cin >> a >> b >> c;
    // 简单的三个数排序算法，如果大于就交换，使 a b c 以从小到大的顺序排列
    if (a > b)
        swap(a, b);
    if (a > c)
        swap(a, c);
    if (b > c)
        swap(b, c);
    if (a + b > c)
        if (a == c)    // 最小的边长 = 最大的边长，即为等边三角形
            cout << "可以构成等边三角形";
        else if (a == b)     // 两条短边相等，即为等腰三角形
            cout << "可以构成等腰三角形";
        else
            cout << "可以构成一般三角形";
    else cout << "不能构成三角形";
    cout << endl;
    return 0;
}
