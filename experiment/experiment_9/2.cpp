/*
从键盘输入职工人数n、每个职工的编号、每个职工1到3月的工资表，求出每人　
第一李度的工资（一行求和）、每个月的平均工资（一列求平均值，保留整数）。（输出字段宽度设置为8）
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, worker[20][5];
    // 第一列为职工号，第二列为1月工资，第三列为2月工资，第四列为3月工资，第五列为季度和

    // 初始化数组
    cout << "请输入职工人数: "; cin >> n;
    cout << "请输入" << n << "个职工的编号及1到3月的工资" << endl;
    for (int i = 0; i < n; i++) {
        cin >> worker[i][0] >> worker[i][1] >> worker[i][2] >> worker[i][3];
        worker[i][4] = worker[i][1] + worker[i][2] + worker[i][3];
    }

    // 计算平均值。先求和，再平均
    int ave_1 = 0, ave_2 = 0, ave_3 = 0, ave_q = 0;
    for (int i = 0; i < n; i++) {
        ave_1 += worker[i][1];
        ave_2 += worker[i][2];
        ave_3 += worker[i][3];
        ave_q += worker[i][4];
    }
    ave_1 /= n, ave_2 /= n, ave_3 /= n, ave_q /= n;

    // 输出结果
    cout << "每月的平均工资及每个职工的季度工资和为：" << endl;
    cout << "  职工号 1月工资 2月工资 3月工资  季度和" << endl;
    for (int i = 0; i < n; i++) {
        cout << setw(8) << worker[i][0] << setw(8) << worker[i][1] << setw(8) << worker[i][2] << setw(8) << worker[i][3] \
            << setw(8) << worker[i][4] << endl;
    }
    cout << "  平均值" << setw(8) << ave_1 << setw(8) << ave_2 << setw(8) << ave_3 << setw(8) << ave_q << endl;
    return 0;
}
