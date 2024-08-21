/*
某工厂今年的工业产值为100万元。
假设每年的产值增长率相同，从键盘输入产值增长率，计算需要多少年产值可以翻一番（即变为原来的2倍）。
*/
#include <iostream>
using namespace std;
int main() {
    short i = 0;
    float value = 100, rate;
    cout << "请输入年增长率：";
    cin >> rate;
    do {
        i++;
        value *= (1 + rate);
        cout << i << "年后的产值为" << value << endl;
    } while (value < 200);
    cout << "需要 " << i << " 年" << endl;
    return 0;
}
