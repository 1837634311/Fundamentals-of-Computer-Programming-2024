/*
将一个整数的各位数字按从低位到高位的顺序存入某一维数组中，然后判断该整数是否为回文数（即判断一维数组是否为镜像数组）。
回文数是指正读与反读都一样的数，例如：12321是回文数，12312不是回文数。
*/
#include <iostream>
using namespace std;
int main() {
    int n, arr[10], i, num = 0;
    cout << "请输入一个正整数（不超过10位）："; cin >> n;
    // 获取正整数每位的数字
    for (i = 0; n > 0; i++, num++) {
        arr[i] = n % 10;
        n /= 10;
    }
    // 判断回文数
    for (i = 0; i < num / 2; i++) {
        if (arr[i] != arr[num - i - 1]) {
            // 判断对称位置是否相等
            cout << "输入的正整数不是回文数！" << endl;
            return 0;
        }
    }
    cout << "输入的正整数是回文数！" << endl;
    return 0;
}
