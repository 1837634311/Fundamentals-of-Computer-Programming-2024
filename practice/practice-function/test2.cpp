/* 找出[100,1000]之间满足如下条件的数：n、n2、n3都是回文数。

【运行结果】
满足条件的有：
m=101,m*m=10201;m*m*m=1030301
m=111,m*m=12321;m*m*m=1367631

编程要求：
1、请在注释信息Program和End之间完成代码，程序其余位置的代码不要改动！
2、请完成子函数功能。
*/

#include <iostream>
using namespace std;
bool IsSymm(int n);    //函数声明                               
int main()
{
    int m;
    cout << "满足条件的有：" << endl;
    for (m = 100; m <= 1000; m++)
        if (IsSymm(m) && IsSymm(m * m) && IsSymm(m * m * m))//函数调用。先删除标志【?】，再填写正确的表达式 
            cout << "m=" << m << ",m*m=" << m * m << ",m*m*m=" << m * m * m << endl;
    return 0;
}

//判断一个数是否为回文数
/*******************Program******************/
bool IsSymm(int n) {
    int m = 0, i = n;
    for (; i > 0; i /= 10)
        m = 10 * m + i % 10;
    return m == n;  // 判断回文数
}
/*********************End********************/
