// 第二题的数组写法，采用C风格字符串
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
    char n[10] = { 0 };    // 定义一个字符数组 n，用于存储输入的二进制数
    short i = 0, sum = 0, len;
    cout << "请输入一个二进制整数（不超过10位）：" << endl;
    cin >> n;    // 读取输入的二进制数
    len = strlen(n);    // 获取输入的二进制数的位数
    short j = pow(2, len - 1);    // 计算二进制数的第一位对应的位权
    while (i < len) {
        sum += (n[i] - '0') * j;    // 计算转换后的十进制数
        // 因为是字符数组，计算字符与 '0' 的距离，得到实际的数值
        i++;
        j >>= 1;    // 每次除以 2，计算下一位的位权
    }
    cout << "转换为十进制为：" << sum << endl;    // 输出转换后的十进制数
    return 0;
}
