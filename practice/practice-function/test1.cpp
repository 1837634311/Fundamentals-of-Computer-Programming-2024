/* 哥德巴赫猜想：大于等于4的偶数都能够分解为两个素数之和。验证歌德巴赫猜想对[4,n]之内的偶数都成立。
【运行结果】
4=2+2，6=3+3，8=3+5，10=3+7，12=5+7，
14=3+11，16=3+13，18=5+13，20=3+17，

编程要求：
1、请在注释信息Program和End之间完成代码，程序其余位置的代码不要改动！
2、请完成子函数功能。
*/

#include <iostream>
#include<cmath>
using namespace std;

bool prime(int n);   //函数声明
int main()
{
    int i, j, count = 1;
    for (i = 4;i <= 20;i += 2)
        for (j = 2;j <= i / 2;j++)
            if (prime(j) && prime(i - j))    //函数调用。先删除标志【?】，再填写正确的表达式
            {
                cout << i << "=" << j << "+" << i - j << ",";
                if (count++ % 5 == 0)
                    cout << endl;
                break;
            }
    cout << endl;
    return 0;
}

//判断一个数是否为素数
/*********************Program********************/
bool prime(int n) {
    // 从2开始，到n的平方根为止，每个数尝试除以n
    for (int i = 2; i * i <= n; i++)
        // 如果能够整除，说明n不是质数
        if (n % i == 0)
            return false;
    // 如果没有一个数能整除n，说明n是质数
    return true;
}
/*********************End********************/