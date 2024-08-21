/*编程实现：从键盘输入n个整数并存入一维数组；输入一个待查找的整数，顺序查找并输出查找结果。

请输入数组实际长度：10
请输入数组的10个元素：9 14 1 7 12 28 17 21 30 25
请输入待查找的值：28
输出：查找成功！查找的值为元素的第6个元素

请输入数组实际长度：10
请输入数组的10个元素：9 14 1 7 12 28 17 21 30 25
请输入待查找的值：8
输出：查找失败！
*/

#include <iomanip>
#include <iostream>
using namespace std;
int Search(int num[], int n, int x);
int main() {
    const int N = 10;
    int a[N], n, i, find, val; // 定义数组及变量
    cout << "请输入数组实际长度：";
    cin >> n;
    cout << "请输入数组的" << n << "个元素：" << endl;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "请输入待查找的值：";
    cin >> val;
    find = Search(a, n, val); // 调用函数实现折半查找
    if (find == -1)
        cout << "查找失败！" << endl;
    else
        cout << "查找成功！查找的值为元素的第" << find + 1 << "个元素" << endl;
    return 0;
}

int Search(int num[], int n, int x) {
    int i, pos;
    /******************Program********************/
    for (i = 0; i < n; i++) {
        // 如果找到元素x，记录位置pos并跳出循环
        if (num[i] == x) {
            pos = i;
            break;
        }
    }
    // 如果遍历完数组仍未找到元素x，则pos为-1
    if (i == n)
        pos = -1;
    return pos;
    /*******************End***********************/
}