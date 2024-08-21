/* 利用冒泡排序法对输入的数据按从小到大的顺序进行排序

请输入数组实际长度：10
请输入数组的10个元素：12 3 90 8 7 5 4 10 34 2
排序后的结果为：2 3 4 5 7 8 10 12 34 90

编程要求：完成子函数定义，可在子函数中定义所需的变量等。
*/

#include <iostream>
#include <iomanip>
using namespace std;
/******************Program********************/
// 子函数定义：实现冒泡排序
void Bubble(int a[], int size) {
    int i, j;
    for (i = 0; i < size - 1; i++)
        for (j = size - 1; j > i; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
}
/*******************End***********************/
int main() {
    const int N = 10;
    int a[N], i, n;
    cout << "请输入数组实际长度：";
    cin >> n;
    cout << "请输入数组的" << n << "个元素：" << endl;
    for (i = 0; i < n; i++)
        cin >> a[i];
    Bubble(a, n);
    cout << "排序后的结果为：" << endl;
    for (i = 0; i < n; i++)
        cout << setw(4) << a[i];
    cout << endl;
    return 0;
}