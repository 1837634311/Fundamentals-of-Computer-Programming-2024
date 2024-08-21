/* 求10到n以内的所有可逆素数，n从键盘输入（可逆素数是指一个素数的反序数也是素数）。
【运行结果】
请输入整数n:100
1~100之间所有的可逆素数有：
   2   3   5  7  11  13  17   31   37   71
  73  79  97

编程要求：
1、请在注释信息Program和End之间完成代码，程序其余位置的代码不要改动！
2、请完成子函数功能。
*/

#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
bool prime(int n);
int reverse(int n);
int main()
{
    int i, n, cnt = 0;
    cout << "请输入整数n:";
    cin >> n;
    cout << "1~" << n << "之间所有的可逆素数有：" << endl;
    for (i = 1;i <= n;i++)
    {
        if (prime(i) && prime(reverse(i)))       //判断i是否是素数且i的反序数是否是素数。先删除标志【?】，再填写正确的表达式
        {
            cout << setw(6) << i;
            cnt++;
            if (cnt % 10 == 0)       //每行输出10个素数
                cout << endl;
        }
    }
    cout << endl;
    return 0;
}


//判断一个是否为素数，需要处理1
/*********************Program********************/
bool prime(int n) {
    if (n <= 1) return false;  // 当小于1时，不是素数
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
/*********************End********************/


//求反序数
/*********************Program********************/
int reverse(int n) {
    // 初始化变量m为0
    int m = 0;
    // 当n大于0时，执行循环
    while (n > 0) {
        // 将n的个位数数字加到m中，即m为m * 10 + n % 10
        m = 10 * m + n % 10;
        // n除以10，去掉个位数数字
        n /= 10;
    }
    return m;
}
/*********************End********************/


