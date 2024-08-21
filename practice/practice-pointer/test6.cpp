/*  利用交换排序法对数据进行升序排列。输出数据时，设置输出格式为setw(4)

【输出】
请输入数组的实际长度：6
请输入数组的6个元素：102 9 1 38 66 71
排序后数组为：   1   9  38  66  71 102
*/
#include<iostream>
#include <iomanip>
using namespace std;
void InputArray(int* p, int n);
void OutputArray(int* p, int n);
void DataSort(int* p, int n);
int main() {
    const int N = 20;
    int a[N], n;
    cout << "请输入数组的实际长度：";
    cin >> n;
    cout << "请输入数组的" << n << "个元素:";
    InputArray(a, n);
    DataSort(a, n);
    cout << "排序后数组为：";  //排序完成后输出元素，不能一边排序以便输出元素
    OutputArray(a, n);
    return 0;
}

void InputArray(int* p, int n) {
    int i;
    for (i = 0;i < n;i++)
        cin >> p[i];
}
void OutputArray(int* p, int n) {
    int i;
    for (i = 0;i < n;i++)
        cout << setw(4) << *(p + i);
    cout << endl;
}

void DataSort(int* p, int n)//交换排序算法
{
    int i, j, t;
    /*************Program************/
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (p[i] > p[j]) {
                t = p[i];
                p[i] = p[j];
                p[j] = t;
            }
    /*************End************/
}