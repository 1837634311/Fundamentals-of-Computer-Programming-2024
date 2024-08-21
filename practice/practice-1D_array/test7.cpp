/*编程实现：按从大到小的顺序输入n个整数并存入一维数组；输入一个待查找的整数，使用折半查找算法进行查找并输出查找结果。

请输入数组实际长度：10
请输入数组元素（从小到大）：1 7 9 12 14 17 21 25 28 30
请输入待查找的值：14
输出：查找成功！查找的值为元素的第5个元素

请输入数组实际长度：10
请输入数组元素（从小到大）：1 7 9 12 14 17 21 25 28 30
请输入待查找的值：8
输出：查找失败！

编程要求：完成子函数定义，可在子函数中定义所需的变量等。
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int  N = 11;      //定义数组长度，预留插入空间
    int a[N], n, i, mid, bot, top, val;       //定义数组及变量
    cout << "请输入数组实际长度：";
    cin >> n;
    cout << "请输入数组元素（从小到大）：" << endl;
    for (i = 0;i < n;i++)
        cin >> a[i];
    cout << "请输入待查找的值：";
    cin >> val;
    /******************Program********************/
    // 初始化bot和top指针
    bot = 0; top = n - 1;
    while (bot <= top) {
        // 中间指针mid
        mid = bot + (top - bot) / 2;
        // 如果val小于mid指针指向的数，则top指针向左移动
        if (val < a[mid])
            top = mid - 1;
        // 如果mid指针指向的数小于val，则bot指针向右移动
        else if (a[mid] < val)
            bot = mid + 1;
        // 如果mid指针指向的数等于val，则找到目标值，跳出循环
        else
            break;
    }
    /*******************End***********************/

    if (bot > top)
        cout << "查找失败！" << endl;
    else
        cout << "查找成功！查找的值为元素的第" << mid + 1 << "个元素" << endl;
    return 0;
}

