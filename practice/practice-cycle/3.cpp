/*  摸彩球问题（穷举法）。一个口袋中放有12个球，其中3个红的、4个白的、5个黑的。若从中任取6个，有多少种不同的颜色搭配？

编程要求：
1、请在注释信息Program和End之间完成代码，程序其余位置的代码不要改动！
2、编程时，只能使用已定义的变量
3、程序只能使用规定的结构，本题要求循环用for语句实现。
*/
#include<iostream>
using namespace std;
int main()
{
    int red, white, black;
    cout << " 红球 白球 黑球" << endl;
    /*************************Program***************************/
    for (red = 0; red <= 3; red++) {
        for (white = 0; white <= 4; white++) {
            if (red + white >= 6) { // 当红球和白球的数目为 6 或 7 时，取不到黑球
                cout << "  " << red << "    " << white << "    0" << endl;
                break;
            }
            for (black = 1; black <= 5; black++) {
                if (red + white + black == 6)
                    cout << "  " << red << "    " << white << "    " << black << endl;
            }
        }
    }
    /*************************End***************************/
    return 0;
}

