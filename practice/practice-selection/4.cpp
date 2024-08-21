/*  从键盘输入年、月、日，判断某年某月某日是这一年的第几天。
输入：2023 3 19
输出：这是2023年的第78天。

编程要求：
1、请在注释信息Program和End之间完成代码，程序其余位置的代码不要改动！
2、编程时，只能使用已定义的变量，不再另外定义变量。
3、程序只能使用规定的结构，本题要求用switch语句实现。
*/
#include<iostream>
using namespace std;
int main()
{
    int year, month, day, sum_day = 0;
    cout << "请输入年、月、日" << endl;
    cin >> year >> month >> day;
    /*************************Program***************************/
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
    /*************************End***************************/
    cout << "这是" << year << "年的第" << sum_day << "天." << endl;
    return 0;
}
