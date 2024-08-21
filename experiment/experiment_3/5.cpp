/*
中国有句俗语叫“三天打鱼两天晒网”。设“打鱼”和“晒网”的周期为5天（第1、2、3天打鱼，第4、5天晒网）。
从键盘输入某年某月某日，使用switch语句判断这一天是在“打鱼”还是在“晒网”？（这里假设从当年的第1天算起，并要求考虑闰年）。
提示：
（1）由于“打鱼”和“晒网”的周期为5天，可以先计算出这一天是这一年的第几天，再将天数除以5，然后根据余数判断是在“打鱼”还是在“晒网”。
（2）闰年：能被4整除但不能被100整除的年份、或者是能被400整除的年份是闰年。闰年2月份有29天。
*/
#include <iostream>
using namespace std;
int main() {
    short year, month, day, sum_day = 0;
    cout << "请分别输入年月日：";
    cin >> year >> month >> day;

    switch (month) {
    case 12: sum_day += 30;
    case 11: sum_day += 31;
    case 10: sum_day += 30;
    case 9: sum_day += 31;
    case 8: sum_day += 31;
    case 7: sum_day += 30;
    case 6: sum_day += 31;
    case 5: sum_day += 30;
    case 4: sum_day += 31;
    case 3: sum_day += 28 + ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
        // 逻辑运算符。关系为真返回非零值1，关系为假返回零值0，也就是闰年加一天。
    case 2: sum_day += 31;
    case 1: sum_day += day;
    }

    cout << "这是 " << year << " 年的第 " << sum_day << " 天" << endl;
    switch (sum_day % 5) {    // 通过总天数 / 5 的余数判断“打鱼”还是“晒网”
    case 1: case 2: case 3:
        cout << "这一天在打鱼" << endl;
        break;
    case 4: case 5:
        cout << "这一天在晒网" << endl;
    }
    return 0;
}