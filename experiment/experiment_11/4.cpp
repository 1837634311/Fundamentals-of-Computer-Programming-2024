// 题目详见 formula.md

#include <iostream>
using namespace std;

int CombinationNumber(int, int);

int main() {
    int n, m;
    cout << "请按从大到小的顺序输入两个正整数："; cin >> n >> m;
    cout << n << "选" << m << "的组合数为：" << CombinationNumber(n, m) << endl;
    return 0;
}

int CombinationNumber(int n, int m) {
    if (m == 0 || m == n)
        return 1;
    else
        return CombinationNumber(n - 1, m) + CombinationNumber(n - 1, m - 1);
}