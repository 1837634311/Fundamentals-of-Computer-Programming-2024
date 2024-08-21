// 题目详见 formula.md

#include <iostream>
using namespace std;

int Calculate(int);
int cnt;    // 记录递归调用的次数

int main() {
    int num;
    cout << "请输入数列项的序号："; cin >> num;
    for (int i = 1; i <= num; i++, cnt = 0) {
        int res = Calculate(i);
        cout << "数列的第" << i << "项为：" << res << "，递归调用次数：" << cnt << endl;
    }
    return 0;
}

int Calculate(int n) {
    cnt += 1;
    // 如果n为1或2，直接返回n
    if (n == 1 || n == 2) return n;
    // 否则，返回斐波那契数列的第n项加上第n-1项的两倍
    return Calculate(n - 1) + 2 * Calculate(n - 2);
}