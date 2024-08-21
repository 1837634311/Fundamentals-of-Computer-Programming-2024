/*
从键盘输入数据的个数n及这n个数（包含重复数据），要求删除其中的重复数据，并输出去重后的数据。
要求：用指针操作数组。
*/
#include <iostream>
using namespace std;

int main() {
    int arr[50], n;
    int* num = arr;
    cout << "请输入数据个数n："; cin >> n;
    cout << "请输入" << n << "个数：" << endl;
    for (int i = 0; i < n; i++)
        cin >> *(num + i);

    // 去重
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            // 找到重复元素后，左移数组
            if (*(num + i) == *(num + j)) {
                for (int k = j; k < n; k++)
                    *(num + k) = *(num + k + 1);
                n--; j--;
            }

    cout << "去重后的数据为：" << endl;
    for (int i = 0; i < n; i++)
        cout << *(num + i) << ' ';
    return 0;
}