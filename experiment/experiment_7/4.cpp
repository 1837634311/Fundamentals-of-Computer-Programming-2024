/*
输入n个整数并存入某一维数组中，找出其中的最大值，并将其删除。如果有多个相同的最大值，则只删除最后一个。
*/
#include <iostream>
using namespace std;
int main() {
    short n, i, max = 0, arr[20] = { 0 };
    cout << "请输入数组个数元素的个数（n<=20)："; cin >> n;
    cout << "请输入" << n << "个数组元素：" << endl;
    // 获取数组的值
    for (i = 0; i < n; i++)
        cin >> arr[i];
    // 找到最大值以及其位置
    for (i = 0; i < n; i++)
        if (arr[i] >= arr[max])
            max = i;
    // 删除最大值
    for (; max < n - 1; max++)
        arr[max] = arr[max + 1];
    cout << "删除最大元素之后的数组为：" << endl;
    // 输出数组
    for (i = 0; i < n - 1; i++)
        cout << arr[i] << ' ';
    cout << endl;
    return 0;
}
