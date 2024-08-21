/*从键盘输入n位同学的学号及m门课程的成绩，找出平均成绩最高的同学，输出该同学的平均成绩及其学号和各科成绩。

【输出】
输入学生人数及课程数量：3 3
请输入学生的学号和各科成绩
学号    课程1   课程2    课程3
202201  80      90       88
202202  90      99       95
202203  78      67       100
平均成绩最高为：94.67
该同学的学号及3门课成绩为：
202202  90  99 95
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const int N = 10;
    int students[N][N];           //定义二维数组
    int i, j, n, m, max_col;
    float max = 0, sum, avg;
    printf("请输入学生人数及课程数量：");
    cin >> n >> m;         //数组列长为m+1
    cout << "请输入学生的学号和各科成绩：" << endl;
    cout << "学号\t ";           //输出时，用水平制表符(tab)间隔
    for (i = 1;i <= m;i++)
        cout << "课程" << i << "\t";     //输入提示
    cout << endl;
    for (i = 0;i < n;i++)
        for (j = 0;j <= m;j++)          //m是课程数量，再加上学号，故一行共m+1列，列下标[0,m]
            cin >> students[i][j];       //输入学号及各科成绩
    /*************Program**************/
    for (i = 0; i < n; i++) {
        for (j = 1, sum = 0; j <= m; j++)
            sum += students[i][j];
        if (sum / m > max) {
            max = sum / m;
            max_col = i;
        }
    }
    /****************End***************/
    cout << "平均成绩最高为：" << fixed << setprecision(2) << max << endl;
    cout << "该同学的学号及" << m << "门课成绩为：" << endl;
    cout << left << setw(8) << students[max_col][0];        //单独输出学号信息
    for (j = 1; j <= m; j++)
        cout << left << setw(4) << students[max_col][j];   //输出平均成绩最高的学生信息
    cout << endl;
    return 0;
}
