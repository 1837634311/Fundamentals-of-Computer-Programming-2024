/*
输入一组数据并存入某一维数组中，用选择排序法完成数组元素的降序排列并输出。
*/
// 选择排序
#include <iostream>
using namespace std;
int main() {
    short size, i, j, min, arr[20] = { 0 };
    cout << "请输入数组个数元素的个数（n<=20)："; cin >> size;
    cout << "请输入" << size << "个待排序的数：" << endl;
    // 获取数组的值
    for (i = 0; i < size; i++)
        cin >> arr[i];

    // 选择排序算法
    // 外循环：未排序区间为 [i, size-1]
    for (i = 0; i < size - 1; i++) {
        // 内循环：找到未排序区间内的最小元素
        for (min = i, j = i + 1; j < size; j++)
            if (arr[j] < arr[min])
                min = j;    // 记录最小元素的索引
        swap(arr[i], arr[min]);     // 交换arr[i]和arr[min]
    }

    cout << "排序后的结果为:" << endl;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
