/*
从键盘输入月份，判断该月是什么季节？
提示：3~5月为春季，6~8月为夏季，9~11月为秋季，12、1、2月为冬季。
要求：判断季节前，先使用if-else语句判断输入月份的合法性，然后使用switch语句判断季节，且switch中的case分句尽量少。
*/
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "请输入月份：";
    cin >> a;
    if (a < 0 || a > 12) {
        cout << "月份输入错误";
        exit(0);
    } else if (a < 3 || a > 11)
        b = 3;
    else if (a < 6)
        b = 0;
    else if (a < 9)
        b = 1;
    else
        b = 2;

    cout << a << " 月处于";
    switch (b) {
    case 0:
        cout << "春季" << endl;
        break;
    case 1:
        cout << "夏季" << endl;
        break;
    case 2:
        cout << "秋季" << endl;
        break;
    case 3:
        cout << "冬季" << endl;
    }
    return 0;
}
