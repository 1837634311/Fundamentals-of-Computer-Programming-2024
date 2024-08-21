/*
在有序数组中插入数据。
（1）主函数功能：输入n个降序的数据存入一维数组中，调用子函数insert完成两个数据的插入操作，并输出插入位置及插入数据后的数组元素（注意：数组的长度要足够大）。
（2）子函数功能：将数x插入到长度为n的降序数组a中，插入过程中数组a始终保持降序，并通过return返回数x插入到数组a中的位置。子函数头要求为：int insert(int a[ ],int n, int x)
*/
#include <iostream>
using namespace std;

int insert(int[], int, int);

int main() {
    int n, x, i, cnt = 0, arr[30] = { 0 };
    cout << "请输入原降序数列的数据个数（n<=20)："; cin >> n;
    cout << "请输入" << n << "个数（降序）：" << endl;
    // 获取数组的值
    for (i = 0; i < n; i++)
        cin >> arr[i];

label:
    cnt++;  // 以及记录插入的值的个数
    cout << "****************************************" << endl;
    cout << "请输入欲插入的第" << cnt << "个数："; cin >> x;
    cout << "插入在第" << insert(arr, n, x) << "个位置" << endl;
    n++;  // 扩大数组有效区间
    cout << "插入第" << cnt << "个数后数据序列为：" << endl;
    for (i = 0; i < n; i++)  // 输出数组
        cout << arr[i] << ' ';
    cout << endl;
    if (cnt == 1)  // 需要插入两个数，所以使用 goto 语句回到插入算法的开头
        goto label;
    return 0;

}

int insert(int a[], int n, int x) {
    int i = n;
    for (; i > 0; i--) {  // 查找插入值在数组中的位置
        if (a[i - 1] <= x)
            a[i] = a[i - 1];  // 没找到时，移动数组，腾出位置
        else
            break;
    }
    a[i] = x;
    return i + 1;
}