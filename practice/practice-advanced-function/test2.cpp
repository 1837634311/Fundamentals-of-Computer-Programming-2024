/*  用递归法求n!
      -1       n<0
n! =   1       n=0
       n*(n-1)! n>=1

编程要求：
1、请在注释信息Program和End之间完成代码，程序其余位置的代码不要改动！
2、请完成子函数功能。用递归法实现求阶乘

【输出】
请输入n：5                     请输入n：0                        请输入n：-4
5!=120                         0!=1                              n<0, data error!
*/

#include <iostream>
using namespace std;
//Fact子函数定义
/*********************Program********************/
long Fact(int n) {
    if (n < 0)
        return -1;
    else if (n == 0)
        return 1;
    else
        return n * Fact(n - 1);
}
/*********************End********************/

int main() {
    int n;
    long result;
    cout << "请输入n：";
    cin >> n;
    result = Fact(n);    //函数调用
    if (result == -1)
        cout << "n<0, data error!" << endl;
    else
        cout << n << "!=" << result << endl;
    return 0;
}


