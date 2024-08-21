/*产生长度为n的动态整型一维数组，n的值从键盘输入；输入数组元素（有重复元素）；在该数组中删除重复元素（相同元素只保留第一个）。
【输出】
输入数组长度：10
输入10个数组元素：2 5 3 2 11 3 7 12 3 10
删重之后的数组元素为：2 5 3 11 7 12 10
*/

#include <iostream>
#include <iomanip>
using namespace std;
void InputArray(int* p, int n);
void OutputArray(int* p, int n);
int Delete(int* p, int n);

int main() {
    const int N = 20;
    int a[N], n;
    cout << "请输入数组实际长度：";
    cin >> n;
    cout << "请输入" << n << "个数组元素：";
    InputArray(a, n);
    n = Delete(a, n);
    printf("删重之后的数组元素为：");
    OutputArray(a, n);
    return 0;
}
int Delete(int* p, int n) {
    int i, j, pos = 1;
    /*****************Program******************/
    for (i = 1; i < n; i++) {
        for (j = 0; j < pos; j++)
            if (*(p + i) == *(p + j))
                break;
        if (j == pos) {
            *(p + pos) = *(p + i);
            pos++;
        }
    }
    /******************End********************/
    return pos;
}
void InputArray(int* p, int n) {
    int i;
    for (i = 0; i < n; i++)
        cin >> p[i];
}
void OutputArray(int* p, int n) {
    int i;
    for (i = 0; i < n; i++)
        cout << left << setw(4) << *(p + i);
    cout << endl;
}