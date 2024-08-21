/*输入一个字符串，判断该字符串是否为回文（回文是指从前往后读与从后往前读得到的结果是一样的）。

用字符数组实现对回文字符串的判断！                                      用字符数组实现对回文字符串的判断！
请输入一个长度（<100）的字符串：abcdcba                                 请输入一个长度（<100）的字符串：abdsdf
该字符串是回文字符串                                                    该字符串不是回文字符串
用string类处理字符串，实现回文字符串的判断！                            用string类处理字符串，实现回文字符串的判断！
请输入一个字符串：abcdcba                                               请输入一个字符串：abdsd
该字符串是回文字符串                                                    该字符串不是回文字符串
*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    const int N = 100;
    string s1;
    char s2[N];
    int left, right;

    //用字符数组实现对回文字符串的判断
    cout << "用字符数组实现对回文字符串的判断！" << endl;
    cout << "请输入一个长度（<100）的字符串：";
    cin.getline(s2, N);
    /********************Program**********************/
    for (left = 0, right = strlen(s2) - 1;left <= right;left++, right--)
        if (s2[left] != s2[right]) {
            cout << "该字符串不是回文字符串" << endl;
            break;
        }
    if (left > right)
        cout << "该字符串是回文字符串" << endl;
    /********************End**********************/

    //用string类处理字符串，实现回文字符串的判断
    cout << "用string类处理字符串，实现回文字符串的判断！" << endl;
    cout << "请输入一个字符串：";
    getline(cin, s1);
    /********************Program**********************/
    for (left = 0, right = s1.size() - 1;left <= s1.size() - 1;left++, right--)
        if (s2[left] != s2[right]) {
            cout << "该字符串不是回文字符串" << endl;
            break;
        }
    if (left > right)
        cout << "该字符串是回文字符串" << endl;
    /********************End**********************/
    return 0;
}
