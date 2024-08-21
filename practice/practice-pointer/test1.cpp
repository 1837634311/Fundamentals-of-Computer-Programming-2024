/*
编程实现：斐波拉契数列，产生斐波那契数列前n项（n由键盘输入）的值并存入数组中，并将数组中的数据反序（逆序）存放，最后输出反序存放的结果。
源程序要求用4个函数实现：
1. int main()：主函数，实现样张中输入输出字符串提示，并调用其他函数；
2. void fbnq(int *p,int n)：产生斐波拉契数列前n项的值，存放在形参指针p指向的数组中。
3. void Reverse(int *p,int n)：将形参指针p指向的数组中的n个数据反序存放
4. void OutputArray(int *p,int n)：输出形参指针p指向的数组中的n个数据。

【输出】
输入斐波拉契数列的项值：10
前10项斐波拉契数列的值为：1 1 2 3 5 8 13 21 34 55
逆序存放的结果为：55 34 21 13 8 5 3 2 1 1
*/
#include<iostream>
#include <iomanip>
using namespace std;
void fbnq(int* p, int n);
void Reverse(int* p, int n);
void OutputArray(int* p, int n);

int main() {
    const int N = 20;
    int Fibo[N], i, j, n;
    cout << "输入斐波拉契数列的项值：";
    cin >> n;
    fbnq(Fibo, n);
    cout << "前" << n << "项斐波拉契数列的值为：" << endl;
    OutputArray(Fibo, n);
    cout << "逆序存放的结果为：" << endl;
    Reverse(Fibo, n);
    OutputArray(Fibo, n);
}

void fbnq(int* p, int n) {
    /*************Program************/
    p[0] = p[1] = 1;
    for (int i = 2; i < n; i++)
        p[i] = p[i - 1] + p[i - 2];
    /*************End************/
}
void Reverse(int* p, int n) {
    int  i, j, temp;
    /*************Program************/
    for (i = 0; i < n / 2; i++) {
        temp = p[i];
        p[i] = p[n - 1 - i];
        p[n - 1 - i] = temp;
    }
    /*************End************/
}
void OutputArray(int* p, int n) {
    int i;
    for (i = 0;i < n;i++)
        cout << setw(4) << *(p + i);
    cout << endl;
}
