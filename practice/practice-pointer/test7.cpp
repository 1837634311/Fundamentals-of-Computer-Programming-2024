/* 利用指针变量操作一维数组元素。在从小到大排列的数据序列中，进行折半查找

输入数组长度：10
输入数组元素：-12 3 7 9 12 23 34 67 89 100
输入查找的值：34
34是数组的第7个元素

输入查找的值：60
查找不成功！
*/
#include<iostream>
#include <iomanip>
using namespace std;
int main() {
    const int N = 20;
    int a[N], i, j, n, value, mid, top, bot;
    int* p = a;
    cout << "请输入数组的实际长度:";
    cin >> n;
    bot = 0;
    top = n - 1;	                  //初始化
    cout << "请输入数组的" << n << "个元素（从小到大排列）:" << endl;
    for (i = 0; i < n; i++)
        cin >> *(p + i);               //通过指针变量实现访问数组元素，p+i是地址，也可以写为&p[i]
    cout << "请输入待查找的值:";
    cin >> value;
    //利用指针变量操作数组元素
    /*************Program************/
    while (bot <= top) {
        mid = bot + (top - bot) / 2;
        if (p[mid] < value)
            bot = mid + 1;
        else if (p[mid] > value)
            top = mid - 1;
        else
            break;
    }
    /*************End************/
    if (bot <= top)
        cout << value << "是数组的第" << mid + 1 << "个元素！" << endl;
    else
        cout << "查找不成功！" << endl;
    return 0;
}
