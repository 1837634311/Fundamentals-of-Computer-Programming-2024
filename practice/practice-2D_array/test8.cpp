/*  要求：将按照如下规律自动生成的数据存放在x数组中，并输出如下图所示三角。
输出产生的二维数组时，设置输出宽度setw(4)；输出倒三角形时，空格宽度setw(2)，数据输出宽度setw(4)。

【输出】
请输入n的值：6               倒三角形输出：
1   7  12  16  19  21        1   7  12  16  19  21
2   8  13  17  20             2    8  13  17  20
3   9  14  18                   3    9  14  18
4  10  15                         4   10   15
5  11                               5    11
6                                      6
*/

#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    const int N = 10;
    int a[N][N], n, i, j, value = 1;
    cout << "请输入n的值：";
    cin >> n;
    //自动产生数组元素并输出
    /*************Program**************/
    for (i = 0; i < n; i++)
        for (j = 0; j < n - i; j++)
            a[j][i] = value++;

    cout << left;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i; j++)
            cout << setw(4) << a[i][j];
        cout << endl;
    }
    /****************End***************/
    cout << "倒三角形输出：" << endl;
    /*************Program**************/
    cout << right;
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++)
            cout << "  ";
        for (j = 0; j < n - i; j++)
            cout << setw(4) << a[i][j];
        cout << endl;
    }
    /****************End***************/
    return 0;
}
