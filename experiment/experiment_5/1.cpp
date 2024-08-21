/*
从键盘输入一个合数，采用单层循环对这个合数进行质因数分解。
合数是指自然数中除了能被1和本身整除外，还能被其他数（0除外）整除的数。
*/
#include<iostream>
using namespace std;
int main() {
    int i, n;
    cout << "请输入 n：";
    cin >> n;
    cout << n << "=";
    for (i = 2;i <= n;)
        if (n % i == 0) { // 找到因子
            if (n != i) {
                // 如果n不等于i，则输出i，并将n除以i，以便继续检查n的其他因子
                cout << i << "*";
                n /= i;
            } else {
                // 如果n等于i，则直接输出i，并结束循环
                cout << i;
                break;
            }
        } else // 不是因子继续遍历
            i++;
        return 0;
}