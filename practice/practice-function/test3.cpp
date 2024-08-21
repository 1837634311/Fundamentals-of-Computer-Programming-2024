/*  用迭代法求n!
【运行结果】
请输入m(m>0)的值:-10
输入的数据有误!请重新输入！
请输入m(m>0)的值:4
4!=24

编程要求：
1、请在注释信息Program和End之间完成代码，程序其余位置的代码不要改动！
2、请完成子函数功能。
*/

#include <iostream>
using namespace std;
//子函数定义，求n!
/*********************Program*****************/
long Fact(int n) {
    // 初始化阶乘结果为1
    int m = 1;
    // 当n大于0时，进行循环
    while (n > 0) {
        // 计算每次循环的阶乘结果
        m *= n;
        n--;
    }
    // 返回阶乘结果
    return m;
}
/*********************End********************/
int main()
{
    int m;
    long result;
    do {
        cout << "请输入m(m>0)的值: ";
        cin >> m;
        if (m < 0)
            cout << "输入的数据有误!请重新输入！" << endl;
    } while (m < 0);
    result = Fact(m);
    cout << m << "!=" << result << endl;
    return 0;
}

