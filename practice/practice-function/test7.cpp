/* 从键盘输入两个正整数m和n（m，n的大小关系不确定），求其范围内（包含m和n两个边界值）所有的完数
（真因子之和等于该数本身的数就称为完数。如：6=1+2+3，则6为完数），并输出所有完数之和。

【运行结果】
请输入m和n的值：1 100
1~100之间的完数有：
6
28
1~100之间所有完数之和：34

编程要求：
1、请在注释信息Program和End之间完成代码，程序其余位置的代码不要改动！
2、请完成子函数功能。
//*/

#include <iostream>
using namespace std;
//子函数定义，判断一个数是否是完数
/*********************Program********************/
bool perfectnum(int n) {
    // 计算n的所有小于n/2的因数之和
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        // 如果n能被i整除
        if (n % i == 0)
            // 把i累加到sum中
            sum += i;
    }
    // 如果sum等于n，说明n是完美数，返回true
    return (sum == n);
}
/*********************End********************/

int main()
{
    int m, n, i, sum = 0;
    cout << "请输入m和n的值：";
    cin >> m >> n;
    if (m > n)                //若m>n，则交换m,n
    {
        m = m + n;
        n = m - n;
        m = m - n;
    }
    cout << m << "~" << n << "之间的完数有：" << endl;
    for (i = m;i <= n;i++) //控制测试的范围m~n      
        if (perfectnum(i))    //函数调用。先删除标志【?】，再填写正确的表达式
        {
            sum = sum + i;         //完数求和 
            cout << i << endl;    //输出完数
        }
    cout << m << "~" << n << "之间所有完数之和：" << sum << endl;
    return 0;
}

