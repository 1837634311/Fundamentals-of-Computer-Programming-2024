/*  用递归法实现进制转换。
请完成程序中缺失的语句
填空注意事项：删除填空标志【？】，然后填写正确语句，并编译运行程序
*/

#include <iostream>
using namespace std;
void DecToBin(int num, int base);            //删除该标志，然后填写正确的函数声明语句
int main() {
    int decimalNum;
    int base = 2;
    cout << "请输入需要转换的十进制数: ";
    cin >> decimalNum;
    cout << "转换后的二进制数为：";
    DecToBin(decimalNum, base);             //删除该标志，然后填写正确的函数调用语句
    cout << endl;
    return 0;
}

void DecToBin(int num, int base) {
    if (num > 0) {
        DecToBin(num / 2, base);    //删除该标志，然后填写正确的函数调用语句（递归调用）
        cout << num % base;
    }
}
