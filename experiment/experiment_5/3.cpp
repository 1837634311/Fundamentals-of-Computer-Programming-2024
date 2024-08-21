/*
从键盘输入行数和一个字符，输出由这个字符构成的图形。
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int row, i, j;
    char ch;
    cout << "请输入行数和字符：";
    cin >> row >> ch;

    for (i = 1; i <= row; i++) {    // 外层循环控制行号
        for (j = 1; j <= row; j++) {     // 内层循环控制输出
            if (j <= row - i)    // 输出空格
                cout << "    ";
            else    // 输出完空格输出字符
                cout << setw(4) << ch;
        }
        cout << endl;
    }
    return 0;
}
