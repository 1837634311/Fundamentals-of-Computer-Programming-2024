/*
编程实现：输出所有玫瑰花数（玫瑰花数是一个四位数，其各位数字的4次方之和等于该数本身）。
（1）主函数功能：调用子函数，对所有可能的数进行判断，输出所有的玫瑰花数。
（2）子函数功能：判断一个数是否为玫瑰花数，返回值为bool型。
*/
#include <iostream>
#include <cmath>
using namespace std;

bool judge(short);

int main() {
    cout << "玫瑰花数有" << endl;
    for (short i = 1000; i < 10000; i++) {
        if (judge(i))
            cout << i << endl;
    }
    return 0;
}

bool judge(short i) {
    short sum = 0, j = i;
    while (j != 0) {
        sum += pow((float)(j % 10), 4);
        j /= 10;
    }
    return sum == i;
}