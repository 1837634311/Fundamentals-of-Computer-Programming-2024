/*  编程实现循环左移和循环右移。本题先实现循环左移，在循环左移的基础上，再进行循环右移。

【输出】
请输入数组的实际长度：10
请输入数组的10个元素：12 3 9 18 6 7 5 11 4 23
请输入循环左移的位数：3
循环左移3位的结果为：18 6 7 5 11 4 23 12 3 9
请输入循环右移的位数：4
循环右移4位的结果为：23 12 3 9 18 6 7 5 11 4
*/

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void cir_LeftMove(int a[], int n, int m);    //循环左移m位
void cir_RightMove(int a[], int n, int m);    //循环右移m位
void InputArray(int a[], int n);             //输入数组元素
void OutputArray(int a[], int n);            //输出数组元素
int main() {
    const int  N = 20;
    int a[N], i, n, m;
    cout << "请输入数组的实际长度：";
    cin >> n;
    InputArray(a, n);             //调用函数，输入数组元素
    cout << "请输入循环左移的位数：";
    cin >> m;
    cir_LeftMove(a, n, m);        //调用函数，循环左移m位
    cout << "循环左移" << m << "位的结果为：" << endl;
    OutputArray(a, n);          //调用函数，输出移动后的结果
    cout << "请输入循环右移的位数：";
    cin >> m;
    cout << "循环右移" << m << "位的结果为：" << endl;
    cir_RightMove(a, n, m);      //调用函数，循环右移m位
    OutputArray(a, n);          //调用函数，输出移动后的结果
    return 0;
}

void cir_LeftMove(int a[], int n, int m) {
    int i, k, t;
    /******************Program********************/
    // 外层循环，循环m % n次
    for (i = 0; i < m % n; i++) {
        // 临时变量t，存储数组a的第一个元素
        t = a[0];
        for (k = 0; k < n - 1; k++)
            // 交换数组a中相邻的两个元素
            swap(a[k], a[k + 1]);
        // 数组a的最后一个元素设为t
        a[n - 1] = t;
    }
    /*******************End***********************/
}
void cir_RightMove(int a[], int n, int m) {
    int i, k, t;
    /******************Program********************/
    // 外层循环，循环m % n次
    for (i = 0; i < m % n; i++) {
        // 临时变量t，存储数组a的最后一个元素
        t = a[n - 1];
        for (k = n - 1; k > 0; k--)
            // 交换数组a中相邻的两个元素
            swap(a[k], a[k + 1]);
        // 数组a的第一个元素设为t
        a[0] = t;
    }
    /*******************End***********************/
}

void InputArray(int a[], int n) {
    int i;
    cout << "请输入数组的" << n << "个元素：" << endl;
    for (i = 0;i < n;i++)
        cin >> a[i];
}

void OutputArray(int a[], int n) {
    int i;
    for (i = 0;i < n;i++)
        cout << setw(4) << a[i];
    cout << endl;
}