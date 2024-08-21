/*孪生素数是指间隔为 2 的相邻素数，例如最小的孪生素数对是3和5，5和7也是(5虽重复但算作2组)。
   输入N，找出1至N之间的孪生素数的组数。
 【运行结果】
 请输入n的值：40
 1到40之间的孪生素数有：
 (3,5)
 (5,7)
 (11，13)
 (17，19)
 (29，31)
 共有5组孪生素数

   编程要求：
1、请在注释信息Program和End之间完成代码，程序其余位置的代码不要改动！
2、只能使用程序已定义的变量
3、循环要求用for实现
*/
#include<iostream>
using namespace std;
bool prime(int n);
int main(void)
{
    int n, i;
    int count = 0;//count存放组数
    cout << "请输入n的值：";
    cin >> n;
    cout << "1到" << n << "之间的孪生素数有：" << endl;
    /*********************Program***************/
    for (i = 3; i < n; i += 2)
        if (prime(i) && prime(i + 2)) {  // 如果 i 和 i+2 都是素数，则它们为孪生素数
            cout << "(" << i << "," << i + 2 << ")" << endl;
            count++;
        }
    /*********************End********************/
    cout << "共有" << count << "组孪生素数" << endl;
    return 0;
}

bool prime(int n)//函数判断是否为素数
{
    int i;
    /*********************Program***************/
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
    /*********************End********************/
}