/*  自动产生S形方阵（N行N列，N不超过10）的数据存入二维整型数组中，并将S形方阵左下三角的数据以等腰三角形样式输出。

【输出】
请输入S方阵的阶数：4
S方阵为：
   1   2   3   4
   8   7   6   5
   9  10  11  12
  16  15  14  13
以等腰三角形输出矩阵左下三角的数据：
        1
      8   7
    9   10  11
  16  15  14  13
编程要求：实现子函数定义，可在子函数中自行定义所需的变量等。
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int N = 10;
    int a[N][N], n = 4, i, j;
    cout << "请输入S方阵的阶数：";
    cin >> n;
    //实现产生S方阵的数据
    /*************Program**************/
    int cnt = 0;    // 不新定义一个变量没法做出来。
    for (i = 0; i < n; i++)
        if (i % 2)
            for (j = n - 1; j >= 0; j--)
                a[i][j] = ++cnt;
        else
            for (j = 0; j < n; j++)
                a[i][j] = ++cnt;
    /****************End***************/

    cout << "S方阵为：" << endl;
    for (i = 0;i < n;i++) {
        for (j = 0;j < n;j++)
            cout << setw(4) << a[i][j];
        cout << endl;
    }
    cout << "以等腰三角形输出S方阵左下三角的数据：" << endl;
    /*************Program**************/
    cout << left;    // 为啥突然左对齐。我还以为是 setw() 的问题，调了好几下都没合适。
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i; j++)
            cout << "  ";
        for (j = 0; j <= i; j++)
            cout << setw(4) << a[i][j];
        cout << endl;
    }
    /****************End***************/
    return 0;
}
