/* 从键盘输入一组整数，将其中的最大值和最小值进行交换。子函数实现交换功能。

【输出】
请输入数据个数：10
请输入10个数据：23 4 89 7 2 19 89 11 2 3
最大值为：89
最小值为：2
交换后的结果为：23 4 89 7 89 19 2 11 2 3    //最后一个最大值和第一个最小值交换
*/
#include <iostream>
#include <iomanip>
using namespace std;
//Swap子函数定义
/*******************Program******************/
void Ex_Max_Min(int* p, int n, int& max, int& min) {
    max = min = 0;  //初始化最大值和最小值为0
    for (int i = 0;i < n;i++) {
        if (p[i] >= p[max])  //如果当前数据大于最大值
            max = i;  //则更新最大值
        if (p[i] < p[min])  //如果当前数据小于最小值
            min = i;  //则更新最小值
    }
    int temp = p[max];  //交换最大值和最小值
    p[max] = p[min];
    p[min] = temp;
    // 更新最值。这样写是因为交换后，最大值和最小值的位置就变了。
    min = p[max];
    max = temp;
}
/*********************End********************/

int  main() {
    const int N = 10;
    int a[N], n, i, max, min, * p = a;  //定义指向数组的指针变量
    cout << "请输入数据个数：";
    cin >> n;
    cout << "请输入" << n << "个数据：" << endl;
    for (i = 0;i < n;i++)
        cin >> a[i];
    Ex_Max_Min(p, n, max, min);    //函数调用
    cout << "最大值为：" << max << endl;
    cout << "最小值为：" << min << endl;
    cout << "交换后的结果为：" << endl;
    for (i = 0;i < n;i++)
        cout << left << setw(4) << a[i];
    cout << endl;
}

