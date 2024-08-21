/*编程实现：在一个从小到大的有序数列中，插入输入的值，插入后，数列仍然保持有序
【输出】
输入数列实际长度(n的大小不能超过10)：10
请输入数列(从小到到大)：5 8 12 15 18 24 30 33 39 40
输入待插入的数x：35
插入后的数组元素为：5 8 12 15 18 24 30 33 35 39 40

编程要求：完成子函数定义，可在子函数中定义所需的变量等。
*/

#include <iostream>
#include <iomanip>
using namespace std;
/******************Program********************/
    //子函数定义：实现插入
int Insert(int arr[], int size, int target) {
    // 从数组的最后一个元素开始遍历
    int i, j;
    for (i = size - 1; i > 0; i--)
        // 如果当前元素大于目标元素，则将当前元素移动到下一个位置
        if (arr[i] > target)
            arr[i + 1] = arr[i];
    // 否则，跳出循环
        else
            break;
    // 将目标元素插入到当前元素的位置
    arr[i + 1] = target;
    // 返回数组的新大小
    return size + 1;
}
/*******************End***********************/
int main() {
    const int  N = 20;      //定义数组长度，预留插入空间
    int a[N], n, x, i, len;     //定义数组a及相关变量
    cout << "输入数列实际长度(n的大小不能超过10)：";
    cin >> n;     //n为数组a的实际长度
    cout << "请输入数列(从小到到大)：" << endl;
    for (i = 0;i < n;i++)
        cin >> a[i]; //输入数组元素
    cout << "输入待插入的数x：";
    cin >> x;
    len = Insert(a, n, x);
    cout << "插入后的数组元素为：" << endl;
    for (i = 0;i < len;i++)
        cout << setw(4) << a[i];
    cout << endl;
    return 0;
}
