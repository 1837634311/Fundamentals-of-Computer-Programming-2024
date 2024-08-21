/*
输出九九乘法表。
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int i, j;

    for (i = 1; i <= 9; i++) {    // 外层循环控制行号，以及左侧数字
        for (j = 1; j <= 9 - i; j++)    // 输出空格
            cout << '\t';
        for (j = 1; j <= i; j++)    // 输出乘法表，控制右侧数字
            cout << i << "*" << j << "=" << i * j << '\t';
        cout << endl;
    }
    return 0;
}
