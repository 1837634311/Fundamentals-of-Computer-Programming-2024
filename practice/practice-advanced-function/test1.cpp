/*  用递归法计算斐波那契数列的第n项。
问题分析：斐波拉契数列中每个数是前两个数之和，而数列的最初两个数都是1。
若设 F0=1, F1=1, F2=2, F3=3, F4=5, F5=8, ...
则：当n＞1时, Fn+2 = Fn+1 + Fn, 且 F0=F1=1。

编程要求：
1、请在注释信息Program和End之间完成代码，程序其余位置的代码不要改动！
2、请完成子函数定义。要求用递归法实现求前n项斐波拉契数列的值

【输出】
请输入n:5
Fib1=1
Fib2=1
Fib3=2
Fib4=3
Fib5=5
*/

#include<iostream>
using namespace std;
int Fib(int n);
int count;              //定义全局变量，用其统计递归函数调用的次数
int main() {
    int n, i, x;
    cout << "请输入n: " << endl;
    cin >> n;
    for (i = 1;i <= n;i++) {
        count = 0;         //每计算一项，计数变量count初始化为0
        x = Fib(i);
        cout << "Fib(" << i << ")=" << x << "，count=" << count << endl;
    }
    return 0;
}

//求斐波拉契数列第n项的值-递归法
/*********************Program********************/
int Fib(int n) {
    count++;          //每调用一次递归函数，计数变量count加1
    if (n == 1 || n == 2)
        return 1;
    else
        return Fib(n - 1) + Fib(n - 2);
}
/*********************End********************/
