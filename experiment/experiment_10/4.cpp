/*
输入一个包含年和月的日期（例如2022年1月），输出其上一个月的日期（例如2021年12月）。
（1）主函数功能：输入日期，调用子函数得到上一个月的日期，并输出。
（2）子函数功能：求输入日期的上一个月的日期。
        子函数头要求定义为：void prevMonth(int *year, int *month)。
*/
#include <iostream>
using namespace std;

void prevMonth(int*, int*);

int main() {
    int y, m;
    // 通过指针访问年、月
    int* year = &y, * month = &m;
    cout << "请输入年和月（以空格分隔）："; cin >> *year >> *month;
    prevMonth(year, month);
    return 0;
}

void prevMonth(int* year, int* month) {
    if (1 <= *month && *month <= 12) {  // 判断输入数据是否合理
        if (*month == 1) {  // 如果为 1 月，跨年
            *month = 12;
            *year -= 1;
        } else
            *month -= 1;
        cout << "前一个月为：" << *year << "年" << *month << "月" << endl;
    } else
        cout << "输入错误！" << endl;
}