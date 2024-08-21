/* 编程实现将数组中的最大元素和最小元素交换，如果有多个相同的最大值、最小值，则只交换第一个最大值和最后一个最小值。
要求：
（1）循环要求使用for语句实现
（2）子函数中对数组元素进行访问，要求使用指针变量+指针运算访问数组元素：*(p+i)
（3）使用已定义的变量，不再另外定义。

【输出】
请输入数组的实际长度：10
请输入10个数组元素：2 88 1 35 9 88 1 6 88 19
交换最大值和最小值的结果为：2 1 1 35 9 88 88 6 88 19
*/

#include <iostream>
#include <iomanip>
using namespace std;
void Max_Min(int* p, int n);
int main() {
    const int N = 20;
    int a[N], n, i;
    cout << "请输入数组的实际长度：";
    cin >> n;
    cout << "请输入" << n << "个数组元素：";
    for (i = 0;i < n;i++)
        cin >> a[i];
    cout << "交换最大值和最小值的结果为：" << endl;
    Max_Min(a, n);
    for (i = 0;i < n;i++)
        cout << left << setw(4) << a[i];
    cout << endl;
}

void Max_Min(int* p, int n) {
    int max = 0, min = 0, i, temp;
    /*************Program************/
    for (i = 0;i < n;i++) {
        if (*(p + i) > *(p + max))
            max = i;
        if (*(p + i) <= *(p + min))
            min = i;
    }
    temp = *(p + max);
    *(p + max) = *(p + min);
    *(p + min) = temp;
    /*************End************/
}
