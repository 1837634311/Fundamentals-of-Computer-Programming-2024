/*编程求a+aa+aaa+aaaa+……+aa…a(n个), 其中a和n为1~9之间的整数,分别从键盘输入他们的值 。

编程要求：
1、请在注释信息Program和End之间完成代码，程序其余位置的代码不要改动！
2、编程时，只能使用已定义的变量
3、程序只能使用规定的结构，本题要求循环用for语句实现。

【输出】
请输入a和n的值：3 5
sum=3+33+333+3333+33333=37035
*/

#include <iostream>
using namespace std;
int main()
{
    int i, a, n, sum = 0, result = 0;   //result保存加数，sum保存和
    cout << "请输入a和n的值：";
    cin >> a >> n;
    cout << "sum=";
    /*************************Program***************************/
    for (i = 1; i <= n; i++) {
        result = result * 10 + a;  // result保存加数
        sum = sum + result;        // sum保存和
        if (i == n) {              // 最后一个数不输出加号
            cout << result;
        } else
            cout << result << "+";
    }
    /*************************End***************************/
    cout << "=" << sum << endl;          //输出和
    return 0;
}
