/* 编程实现：键盘输入一个十进制数，转换成二进制数/八进制/十六进制并输出。
注意：
1. 十进制转其它进制的转换规则为：除基取余，直到商为0，将余数从后往前输出
2. 十六进制的数字为：0~9，A~F  即10-A,11-B,12-C,13-D,14-E,15-F。
3. 在十进制转十六进制时，'A'的ASCII码为65，若余数为10，则将10转为A，只需加55即可。同理可处理11~15，将它们转换为对应的字母
*/

#include<iostream>
using namespace std;

int ConverDto(int m, int* p, int model);    //m为需要转换的数据，model为转向的进制
int main() {
    const int N = 20;
    int result[N];
    int num, lenth, i, model;
    cout << "请输入一个十进制数：";
    cin >> num;
    cout << "请输入需要转换的进制：";
    cin >> model;
    lenth = ConverDto(num, result, model);
    cout << "转换后的数据为：\n";
    //以下代码请仔细研读，理解并掌握！
    for (i = lenth - 1;i >= 0;i--)          //余数需要"从后往前"输出，故i从lenth-1~0
    {
        if (model == 2 || model == 8)        //如果是二进制或八进制，直接输出余数
            cout << result[i];
        else                         //处理十六进制的转换结果     
            if (result[i] <= 9)      //十六进制数字：0~9， A~F
                cout << result[i];   //如果余数为0~9，直接输出
            else
                cout << char(result[i] + 55);   //否则，进行转换，即10-A，11-B，12-C，13-D，14-E，15-F
    }                                    //'A'的ASCII码为65，故10转为A，只需加55即可，然后以字符形式输出其ASCII码。同理，处理11~15    
    cout << endl;
    return 0;
}
int ConverDto(int m, int* p, int model) {
    int lenth = 0;
    /******************Program********************/
    switch (model) {
    case 2:
        while (m > 0) {
            p[lenth++] = m % 2;
            m /= 2;
        }
        break;
    case 8:
        while (m > 0) {
            p[lenth++] = m % 8;
            m /= 8;
        }
        break;
    case 16:
        while (m > 0) {
            p[lenth++] = m % 16;
            m /= 16;
        }
        break;
    default:
        cout << "Error!" << endl;
    }
    /*******************End***********************/
    return lenth;
}
