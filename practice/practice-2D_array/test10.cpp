/* 1、求二维数组的最大值及其行、列下标；
2、求二维数组每行的最大值及其列下标；
3、求二维数组每列的最大值及其行下标

【输出】
请输入数组的行列值：2 3
请输入二维数组的元素：
13 5 7
1 100 9
二维数组的最大元素为：100，	它是第2行第2列的元素
第1行的最大元素为：13，它是第1列的元素
第2行的最大元素为：100，它是第2列的元素
第1列的最大元素为：13，它是第1行的元素
第2列的最大元素为：100，它是第2行的元素
第3列的最大元素为：9，它是第2行的元素
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const int N = 10;
    int a[N][N];                       //定义二维数组
    int n, m, i, j, max_row, max_col;
    cout << "请输入数组的行列值：";
    cin >> n >> m;
    cout << "请输入二维数组的元素：" << endl;
    for (i = 0;i < n;i++)
        for (j = 0;j < m;j++)
            cin >> a[i][j];
    //求二维数组的最大值及其行列下标
    /*************Program**************/
    for (i = 0; i < n; i++) {
        max_row = max_col = 0;
        for (j = 0; j < m; j++)
            if (a[i][j] > a[max_row][max_col]) {
                max_row = i;
                max_col = j;
            }
    }
    cout << "二维数组的最大元素为：" << a[max_row][max_col] << "，它是第" << max_row + 1 << "行第" << max_col + 1 << "列的元素" << endl;
    /****************End***************/


    //求每行的最大值及其列下标
    /*************Program**************/
    for (i = 0; i < n; i++) {
        max_col = 0;
        for (j = 0; j < m; j++)
            if (a[i][j] > a[i][max_col])
                max_col = j;
        cout << "第" << i + 1 << "行的最大元素为：" << a[i][max_col] << "，它是第" << max_col + 1 << "列的元素" << endl;
    }
    /****************End***************/


    //求每列的最大值及其行下标
    /*************Program**************/
    for (j = 0; j < m; j++) {
        max_row = 0;
        for (i = 0; i < n; i++)
            if (a[i][j] > a[max_row][j])
                max_row = i;
        cout << "第" << j + 1 << "列的最大元素为：" << a[max_row][j] << "，它是第" << max_row + 1 << "行的元素" << endl;
    }
    /****************End***************/
    return 0;
}
