/* 编程实现求数组中的最大值。子函数实现求最大值功能，若有多个相同的最大值，输出最后一个最大值
【要求】只使用程序定义的变量；完善子函数功能

【输出】
请输入数组的实际长度：10
请输入数组的10个元素：12 38 90 17 18 90 19 22 90 3
max=a[8]=90，最大值是第9个元素
*/

#include <iostream>
using namespace std;
void Max(int a[], int n, int& max, int* pos);

int main() {
    const int N = 20;
    int a[N], n, max, pos, i;
    cout << "请输入数组的实际长度（<20）：";
    cin >> n;
    cout << "请输入数组的" << n << "个元素：";
    for (i = 0;i < n;i++)
        cin >> a[i];
    Max(a, n, max, &pos);         // 函数调用，删除【？】标志后，在该处填写正确的调用语句
    cout << "max=a[" << pos << "]=" << max << ",最大值是第" << pos + 1 << "个元素" << endl;
    return 0;
}
void Max(int a[], int n, int& max, int* pos) {
    int i;
    max = a[0];      //将第一个元素设置为默认最大值！注意引用变量的使用方法（变量名）
    *pos = 0;        //记录最大值的下标信息！注意变量的初始化！
    /******************Program*****************/
    for (i = 1; i < n; i++)
        if (a[i] >= max) {
            max = a[i];
            *pos = i;
        }
    /*********************End********************/
}

