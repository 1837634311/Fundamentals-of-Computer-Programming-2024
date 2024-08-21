/* 从键盘输入一串字符，将其逆序存放并输出

请输入字符串：Hello C
逆序存放的结果为：C olleH
*/

#include <iostream> 
#include <string> 
using namespace std;
int main() {
    string str;
    char ch;
    int i = 0, j, L;
    cout << "请输入字符串：";
    getline(cin, str);                   //接收字符串，包括空格
    /********************Program**********************/
    L = str.length();                          //获取字符串长度
    for (j = 0; j < L / 2; j++) {                //字符串逆序存放
        ch = str[j];
        str[j] = str[L - j - 1];
        str[L - j - 1] = ch;
    }
    /********************End**********************/
    cout << "逆序存放的结果为：" << str << endl;
}
