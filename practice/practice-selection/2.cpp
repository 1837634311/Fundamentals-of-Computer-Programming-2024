/*  从键盘输入成绩，根据成绩判断等级。
例如：    成绩       等级
          90~100      A
      70~89       B
      60~69       C
      60分以下    D
输入：95
输出：A

编程要求：
1、请在注释信息Program和End之间完成代码，程序其余位置的代码不要改动！
2、编程时，只能使用已定义的变量，不再另外定义变量。
3、程序只能使用规定的结构，本题要求用switch语句实现。
*/
#include<iostream>
using namespace std;
int main()
{
    int grade;
    cout << "请输入成绩：";
    cin >> grade;
    /*************************Program***************************/
    switch (grade / 10) {
    case 10: case 9:
        cout << "A" << endl;
        break;
    case 8: case 7:
        cout << "B" << endl;
        break;
    case 6:
        cout << "C" << endl;
        break;
    default:
        cout << "D" << endl;
    }
    /*************************End***************************/
    return 0;
}