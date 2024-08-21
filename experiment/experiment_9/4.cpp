/*
输入数字n（n<10），输出n层正方形图案。正方形图案最外层的数字是层数，
最内层的数字是1，从外向内数字递减。（输出数据字段宽度设为3）
*/
#include <iostream>
#include <iomanip>
using namespace std;

int dis(int, int, int);

int main() {
    int n;
    cout << "请输入n值（n<10）："; cin >> n;

    int size = 2 * n - 1;    // 计算正方形的边长
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            // （n - 点到最近边的距离）就是图形在该位置的数字
            cout << setw(3) << n - dis(i, j, size);
        cout << endl;
    }
    return 0;
}

/*
 * 计算点到最近边的距离的函数
 * 输入：点的横坐标，点的纵坐标，正方形的边长
 * 输出：点到最近边的距离
*/
int dis(int i, int j, int size) {
    return min(min(i, j), min(size - 1 - i, size - 1 - j));
    /*
    min(i, j) 计算到左边或上边最近的距离
    min(size - 1 - i, size - 1 - j) 计算到右边或下边最近的距离
    由上面两个式子可计算到最近边的距离
    */
}