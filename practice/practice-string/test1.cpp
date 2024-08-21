/*定义字符型一维数组用来存放字符串（字符串长度<30），从键盘输入一个字符串和一个英文字母，
统计该英文字母在字符串中出现的次数（不区分大小写）

请输入字符串：Hello C++，123 Everyone！
请输入要查找的字母：e
字母e在字符串中出现的次数为4次

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char ch;
    int i, sum = 0;
    cout << "请输入字符串：";
    getline(cin, str);
    cout << "请输入要查找的字母：";
    cin >> ch;
    /********************Program**********************/
    for (i = 0;i < str.length();i++)
        if (str[i] == ch || str[i] == ch - 32 || str[i] == ch + 32)
            sum++;
    // str[i] == ch - 32 ：字符串中字母为大写，输入字母为小写的情况
    // str[i] == ch ：     字符串中字母与输入字母同为大写或小写的情况
    // str[i] == ch + 32 ：字符串中字母为小写，输入字母为大写的情况
    /********************End**********************/
    cout << "字母" << ch << "在字符串中出现的次数为" << sum << "次" << endl;
    return 0;
}
