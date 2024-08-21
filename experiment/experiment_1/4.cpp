/*
从键盘输入一个小写英文字母，输出其对应的ASCII码，计算并输出该字母在26个英文字母中的序号。
*/
#include <iostream>
using namespace std;
int main() {
    char x;
    cout << "请输入一个小写英文字母：";
    cin >> x;     // 输入字符常量
    int y = x;    // 将输入的字母转化为 ACSII 码
    cout << "英文字母 " << x << " 的 ASCII 码是 " << y;
    cout << "，是 26 个英文字母中的第 " << y - 96 << " 个字母。";
    // ACSII 码从 97 开始为小写字母
    return 0;
}
