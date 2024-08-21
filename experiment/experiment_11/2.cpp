/*
输入某一年的第几天，计算并输出它是这一年的几月几日（要求考虑闰年）。
（1）主函数功能：输入某一年的第几天，调用子函数计算该天是这一年的几月几日，输出结果。
（2）子函数功能：计算某一年的第几天是这一年的几月几日，函数声明如下：
void MonthDay(int year, int num, int &month, int &day);
*/
#include <iostream>
using namespace std;
void MonthDay(int year, int num, int& month, int& day);

int main() {
    int year, num, month = 1, day;
    cout << "请输入一个年份："; cin >> year;
    cout << "今天是" << year << "年的第几天："; cin >> num;

    MonthDay(year, num, month, day);
    cout << year << "年的第" << num << "天是" << month << "月" << day << "号" << endl;
    return 0;
}

void MonthDay(int year, int num, int& month, int& day) {
    short days[11] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 };
    if (num <= days[0]) {    // 只有处于一月时，天数就是第几天
        day = num;
        return;
    }

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        days[1] += 1;    // 闰月时二月天数 +1
    }
    for (short i = 0; i < 11 && num > days[i]; i++) {
        num -= days[i];
        month += 1;
    }
    day = num;
}