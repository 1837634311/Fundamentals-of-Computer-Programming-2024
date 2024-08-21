/*
从键盘输入一个字符，使用双分支结构（if…else）判断其是否为英文字母。
*/
#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "请输入任意一个字符：";
    cin >> c;
    if ((c > 64 && c < 91) || (c > 96 && c < 123)) {
        // ASCII 中，大写字母的范围：65~90，小写字母的范围：97~122
        // 判断输入的字符是否在英文字符的范围内
        cout << "输入的字符 " << c << " 是英文字母" << endl;
    } else {
        cout << "输入的字符 " << c << " 不是英文字母" << endl;
    }
    return 0;
}
