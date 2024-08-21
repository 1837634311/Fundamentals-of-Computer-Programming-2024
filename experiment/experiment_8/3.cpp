/*
统计《程序设计》课程成绩的及格率。
（1）主函数功能：输入学生人数n（<=40）和各位学生的成绩（使用一维数组存放），
     通过调用子函数count得到成绩的及格率，并输出及格率。
（2）子函数功能：统计存放在长度为n的一维数组score中成绩的及格率，并用return返回及格率。
     子函数头要求为：double count(double score[ ], int n)
*/
#include <iostream>
using namespace std;

double count(double[], int);

int main() {
    int n, i, num = 0;
    double arr[40];
    cout << "请输入学生人数n(n<=40)："; cin >> n;
    cout << "请输入" << n << "个学生的《程序设计》成绩：" << endl;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << "《程序设计》课程的及格率为：" << count(arr, n) << '%' << endl;
    return 0;
}
double count(double score[], int n) {
    double num = 0;
    for (int i = 0; i < n; i++)
        if (score[i] >= 60)
            num++;
    return 100 * num / n;
}
