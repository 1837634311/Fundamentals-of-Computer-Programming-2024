/*
已知A商品单价为7.3元，购买数量20个及以上时打八折。
从键盘输入商品数量；若商品数量不为负数，则计算出商品总金额并输出，再输入付款金额，计算出找零金额并输出。
要求所有输出均保留两位小数。
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float x, y, z, A = 7.3;
    cout << fixed << setprecision(2);    // 设置小数位数为 2
    cout << "请输入 A 商品数量：";
    cin >> x;
    if (x < 0) {    // 三分支结构
        cout << "A 商品输入数量错误！" << endl;
        exit(0);
    } else if (x >= 20) {
        z = x * A * 0.8;
    } else {
        z = x * A;
    }
    cout << "商品总金额为 " << z << endl;
    cout << "请输入付款金额：";
    cin >> y;
    cout << "找零金额为 " << y - z << endl;
    return 0;
}
