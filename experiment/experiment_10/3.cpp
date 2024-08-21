/*
从键盘输入包含m个整数的集合存入数组a中、包含n个整数的集合存入数组b中，求a和b的并集c。
要求：用指针操作数组。
*/
#include <iostream>
using namespace std;
int main() {
    int a[100], b[50], m, n;

    int* A = a, * B = b;  // 用指针去操作两个数组
    cout << "请输入数组a的个数m："; cin >> m;
    cout << "请输入数组a的" << m << "个数：" << endl;
    for (int i = 0; i < m; i++)
        cin >> A[i];

    cout << "请输入数组b的个数n："; cin >> n;
    cout << "请输入数组b的" << n << "个数：" << endl;
    for (int i = 0; i < n; i++)
        cin >> B[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            // 遍历数组，当有不重复的数据时，将加到b中的数据加到a的末尾
            if (B[i] == A[j])
                break;
            else if (j == m - 1)
                A[m++] = B[i];
    }

    cout << "并集为：" << endl;
    for (int i = 0; i < m; i++)
        cout << A[i] << " ";

    return 0;
}
