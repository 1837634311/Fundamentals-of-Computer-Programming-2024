/*
产生n个[50,99]范围内的随机数，存入一维整型数组中，删除数组中所有的偶数元素。
输出删除偶数元素之前和之后的数组元素，要求每行输出6个数据、数据域宽为4。
*/
#include <iostream>
#include <ctime>
#include <iomanip>

void printArr(short[], short);

using namespace std;
int main() {
    short n, i, j, arr[50] = { 0 };
    cout << "请输入一维数组元素的个数n(n<=50)："; cin >> n;

    srand((unsigned int)time(NULL));    // 更新随机数种子
    for (i = 0; i < n;i++)    // 用随机数填充数组
        arr[i] = rand() % 50 + 50;

    cout << "删除偶数之前的一维数组：" << endl;
    printArr(arr, n);    // 调用函数输出数组元素
    cout << endl;
    // 删除偶数
    for (i = 0; i < n; i++)
        if (arr[i] % 2 == 0) {
            for (j = i; j < n - 1; j++)
                arr[j] = arr[j + 1];    // 后面的元素前移
            n--;    // 元素个数减 1
        }

    cout << "删除偶数之后的一维数组：" << endl;
    printArr(arr, n);    // 调用函数输出数组元素
    cout << endl;
    return 0;
}

void printArr(short arr[], short n) {
    for (int i = 0; i < n; i++) {
        cout << setw(4) << arr[i];
        if ((i + 1) % 6 == 0 && i != n - 1)    // 逢 6 换行
            cout << endl;
    }
}