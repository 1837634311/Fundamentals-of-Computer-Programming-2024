/*
自动产生斐波那契数列前m项的值，存储在数组a中。将数组a中的数据循环左移n位，并输出移动后的结果。
（1）主函数功能：从键盘输入数据个数m及左移的位数n，产生斐波那契数列前m项的值存储在数组a中，
    调用子函数实现对数组a左移n位的操作，并输出移动后的结果。
（2）子函数功能：对指针p所指向的包含m个元素的数组实现循环左移n位的操作，
    子函数头要求定义为：void move(int *p, int m, int n) 。
*/
#include <iostream>
using namespace std;

void move(int*, int, int);

int main() {
    int m, n, fib[50] = { 1, 1 };
    int* p = fib;
    cout << "请输入数据个数m："; cin >> m;

    // 生成斐波拉契数列
    for (int i = 0; i < m - 2; i++)
        fib[i + 2] = fib[i] + fib[i + 1];

    cout << "移动前的数据为：" << endl;
    for (int i = 0; i < m; i++)
        cout << fib[i] << " ";
    cout << endl;

    cout << "请输入左移的位数n："; cin >> n;
    move(p, m, n);

    cout << "移动后的数据为：" << endl;
    for (int i = 0; i < m; i++)
        cout << fib[i] << " ";
    cout << endl;

    return 0;
}

// 左移数组
void move(int* p, int m, int n) {
    for (int i = 0; i < n % m; i++) {
        int temp = *p;
        for (int j = 0; j < m; j++)
            *(p + j) = *(p + j + 1);
        *(p + m - 1) = temp;
    }
}