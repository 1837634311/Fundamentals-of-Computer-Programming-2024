/* 矩阵求和：A+B=C，即c[i][j] = a[i][j] + b[i][j];

【输出】
请输入2×3矩阵A的元素：
1 2 3
4 5 6
请输入2×3矩阵B的元素：
7 8 9
10 11 12
两个矩阵的和为：
8   10  12
14  16  18
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const int N = 2;
    const int M = 3;
    int a[M][N], b[M][N], c[M][N];
    int i, j;
    cout << "请输入" << N << "×" << M << "矩阵A的元素：" << endl;
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            cin >> a[i][j];
    cout << "请输入" << N << "×" << M << "矩阵B的元素：" << endl;
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            cin >> b[i][j];
    cout << "两个矩阵的和为：" << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {    // 矩阵求和
            // program
            c[i][j] = a[i][j] + b[i][j];
            // end
            cout << left << setw(4) << c[i][j];
        }
        cout << endl;
    }
}
