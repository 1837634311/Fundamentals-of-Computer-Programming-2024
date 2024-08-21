/*   矩阵转置：只用一个二维数组，实现方阵（N×N）的转置。方阵的阶n从键盘输入，数据随机产生，范围[10,50]。
【输出】
请输入方阵的阶数：4
随机产生4阶方阵的所有元素：                      转置后的方阵为：
23 14 35 16                                      23 12 40 38
12 31 22 30                                      14 31 33 17
40 33 18 19                                      35 22 18 36
38 17 36 44                                      16 30 19 44
*/


#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
int main() {
    const int N = 10;
    int a[N][N], i, j, n;
    cout << "请输入方阵的阶数:";
    cin >> n;
    srand(time(NULL));
    for (i = 0;i < n;i++)
        for (j = 0;j < n;j++)
            a[i][j] = 10 + rand() % 41;
    cout << "原方阵为：" << endl;
    for (i = 0;i < n;i++) {
        for (j = 0;j < n;j++)
            cout << setw(4) << a[i][j];
        cout << endl;
    }
    //矩阵转置
    /*************Program**************/
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            swap(a[i][j], a[j][i]);
    /****************End***************/
    cout << "转置后的方阵为：" << endl;
    for (i = 0;i < n;i++) {
        for (j = 0;j < n;j++)
            cout << setw(4) << a[i][j];
        cout << endl;
    }
    return 0;
}
