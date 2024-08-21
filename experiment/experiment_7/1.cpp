/*
产生若干个[1，100]范围内的随机整数并存入某一维数组中。
求数组元素中奇数元素的个数、奇数元素的平均值、偶数元素的个数、偶数元素的平均值。
要求：输出数组元素时，每行输出5个数，数据域宽为5。平均值保留两位小数。
*/
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
int main() {
    short n, i, odd = 0, even = 0, arr[50] = { 0 };
    float odd_sum = 0, even_sum = 0;
    cout << "请输入一维数组元素的个数n(n<=50)："; cin >> n;
    srand((unsigned int)time(NULL));    // 更新随机数种子
    for (i = 0; i < n;i++)    // 用随机数填充数组
        arr[i] = rand() % 100 + 1;
    for (i = 0; i < n; i++) {
        // 判断随机数奇偶并单独求和
        if (arr[i] % 2 != 0) {
            odd++;
            odd_sum += arr[i];
        } else {
            even++;
            even_sum += arr[i];
        }
    }
    for (i = 0; i < n; i++) {
        cout << setw(5) << arr[i];
        if ((i + 1) % 5 == 0)    // 逢 5 换行
            cout << endl;
    }
    cout << endl;
    cout << "奇数元素有 " << odd << " 个，其平均值为 " \
        << fixed << setprecision(2) << odd_sum / odd << endl;
    cout << "偶数元素有 " << even << " 个，其平均值为 " \
        << fixed << setprecision(2) << even_sum / even << endl;
    return 0;
}
