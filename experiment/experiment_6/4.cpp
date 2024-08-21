/*
调用rand( )函数在[10,500]范围内随机产生若干个整数，判断并输出其中的可逆素数。
可逆素数是指：一个素数，将其各位数字的顺序倒过来构成的反序数也是素数。
例如：347是素数，其反序数743也是素数，所以347是可逆素数。
（1）主函数功能：输入数据个数n，生成n个随机数：对每一个数，调用子函数1计算该数的反序数，调用子函数2判断该数及其反序数是否为素数；输出n个数据中的所有可逆素数。
（2）子函数1功能：计算一个数的反序数，返回值为int型。
（3）子函数2功能：判断一个数是否为素数，返回值为bool型。
*/
#include <iostream>
#include <ctime>
using namespace std;

int Inverse(short);
bool isPrime(short);

int main() {
    int n;
    cout << "请输入数据个数：";
    cin >> n;
    srand((unsigned int)time(NULL));
    cout << "随机产生的" << n << "个数中的可逆素数有：" << endl;
    for (int i = 1; i <= n; i++) {
        short num = 10 + rand() % 491;
        if (isPrime(num)) {
            short inverse = Inverse(num);
            if (isPrime(inverse))
                cout << num << endl;
        }
    }
    return 0;
}

int Inverse(short n) {
    int inverse = 0, digit;
    while (n != 0) {
        digit = n % 10;
        inverse = inverse * 10 + digit;
        n /= 10;
    }
    return inverse;
}

bool isPrime(short n) {
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
