/*  文具厂销售笔袋，按照客户的购买数量不同，给出了不同的优惠政策，详见下表。
数量（个）	单价（元/个）
1~49	    38
50~99	    35
100~199   	32
200~299	    30
300及以上	28
编程实现：输入客户购买笔袋数量，输出购买总金额。

编程要求：
1、请在注释信息Program和End之间完成代码，程序其余位置的代码不要改动！
2、编程时，只能使用已定义的变量，不再另外定义变量。
3、程序只能使用规定的结构，本题要求用switch语句实现。
*/

#include<iostream>
using namespace std;
int main()
{
    int num, price, total;
    cout << "请输入购买的笔袋数量（>0):";
    cin >> num;
    /*****************Program*****************************/
    switch (num / 50) {
    case 0: price = 38; break;
    case 1: price = 35; break;
    case 2: case 3: price = 32; break;
    case 4: case 5: price = 30; break;
    default: price = 28;
    }
    total = num * price;

    /********************End*****************************/
    cout << "购买" << num << "个文件袋共花费" << total << "元。" << endl;
    return 0;
}

