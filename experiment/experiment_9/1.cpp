/*
设有一个元素皆为整数的 n阶矩阵(n不超过 10)，从键盘输入矩阵的阶数n及矩阵的元素，
求出其主对角线上元素的最大值及位置、次对角线上元素的最小值及位置，
并完成两者的数据互换，输出互换后的结果矩阵。（输出字段宽度设为4)
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, a[10][10], max[3], min[3];

    // 初始化矩阵
    cout << "请输入矩阵的阶数："; cin >> n;
    cout << "请输入" << n << "阶矩阵的元素，两个数之间用空格间隔，每行输完后按回车：" << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    // 初始化存放最值的数组，第一个数字是最值，第二个数字是所在行数，第三个数字是所在列数
    max[0] = a[0][0], max[1] = max[2] = 0;
    min[0] = a[n - 1][n - 1], min[1] = min[2] = n - 1;

    // 找出主对角线上的最大值和次对角线上的最小值
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if (i == j && a[i][j] > max[0]) {
                max[0] = a[i][j];
                max[1] = i;
                max[2] = j;
            }
            if (i + j == n - 1 && a[i][j] < min[0]) {
                min[0] = a[i][j];
                min[1] = i;
                min[2] = j;
            }
        }

    // 输出最值信息
    cout << "主对角线元素的最大值为：" << max[0] << "，位于第" << max[1] + 1 << "行，第" << max[2] + 1 << "列" << endl \
        << "次对角线元素的最小值为：" << min[0] << "，位于第" << min[1] + 1 << "行，第" << min[2] + 1 << "列" << endl \
        << "互换后的结果矩阵为：" << endl;

    // 交换最值
    a[max[1]][max[2]] = min[0];
    a[min[1]][min[2]] = max[0];
    // swap(a[max[1]][max[2]], a[min[1]][min[2]]);

    // 输出矩阵
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << setw(4) << a[i][j];
        cout << endl;
    }
    return 0;
}