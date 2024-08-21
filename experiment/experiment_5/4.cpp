/*
工地需要搬运砖块，已知男人一人搬3块，女人一人搬2块，小孩两人搬1块。
从键盘输入n，让这 n个人一次性搬完n块砖，编程列出每种搬法，并统计共有多少种搬法。
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int men, women, children, m, cnt = 0;
    cout << "请输入砖数:";
    cin >> m;
    cout << right << setw(5) << "男" << setw(5) << "女" << setw(5) << "孩" << endl;
    for (men = 0; men <= m / 3; men++)  // 遍历男人可能的取值
        for (women = 0; women <= (m - men * 3) / 2; women++) { // 在男人数确定的情况下，遍历女人可能的取值
            children = m - men - women; // 小孩的取值
            if (children % 2 == 0 && (men * 3 + women * 2 + children / 2) == m) {// 结果符合要求才输出
                cout << right << setw(4) << men << setw(4) << women << setw(4) << children << endl;
                cnt++;
            }
        }
    cout << "共有 " << cnt << " 种搬法" << endl;
    return 0;
}