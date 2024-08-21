/*
对输入的一串信息（可包含空格）进行加密处理。
加密规则如下：将字母表看成首尾衔接的闭合环，对信息中的字母，用该字母前的第5个字母进行替换；
对信息中的非字母，不做处理，原样输出。
要求：使用string变量存放字符串，
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "请输入要加密的信息：" << endl;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++) {
        if ('A' <= str[i] && str[i] <= 'Z')
            // 大写字母处理
            str[i] = 'A' + (str[i] - 'A' - 5 + 26) % 26;
        else if ('a' <= str[i] && str[i] <= 'z')
            // 小写字母处理
            str[i] = 'a' + (str[i] - 'a' - 5 + 26) % 26;
    }
    cout << "加密后的信息为：" << endl << str << endl;
    return 0;
}