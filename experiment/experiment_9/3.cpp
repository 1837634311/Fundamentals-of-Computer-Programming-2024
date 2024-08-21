/*
已知有 const int M=1O; int x[M][M], m；要求：将按照如下规律自动生成的数据存放在x数组中，并输出如下图所示三角。
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int M = 10;
    int x[M][M] = { 0 }, m;
    cout << "请输入m值："; cin >> m;

    // 按照从上到下的顺序，递增初始化矩阵。先填充列，再填充行
    for (int j = 0, cnt = 0; j < m; j++)
        for (int i = 0; i < m - j; i++)
            x[i][j] = ++cnt;

    // 输出原始矩阵
    for (int i = 0; i < m; i++) {
        // 控制输出的数字格式
        for (int j = 0; j < m - i; j++)
            cout << setw(4) << x[i][j];
        cout << endl;
    }

    // 输出倒三角矩阵矩阵
    cout << "倒三角输出" << endl;
    for (int i = 0; i < m; i++) {
        // 控制输出的空格数
        for (int j = 0; j < i; j++)
            cout << setw(4) << ' ';
        // 控制输出的数字格式，第一个数据单独设置格式 
        for (int j = 0; j < m - i; j++)
            if (j == 0)
                cout << setw(4) << x[i][j];
            else
                cout << setw(8) << x[i][j];
        cout << endl;
    }

    return 0;
}
