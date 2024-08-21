/* 在从小到大排列的数据序列中，插入输入的值，插入后仍然保持有序。

【输出】
输入数组实际长度：10
输入数组元素：-12 3 7 9 12 23 34 67 89 100
输入插入的值：77
插入后的元素为：-12 3 7 9 12 23 34 67 77 89 100

*/
#include<iostream>
#include <iomanip>
using namespace std;
void InputArray(int* p, int n);
void OutputArray(int* p, int n);
void Insert(int* p, int n, int  val);
int main() {
    const int N = 20;
    int a[N], n, value;
    cout << "请输入数组的实际长度:";
    cin >> n;
    cout << "请输入数组的" << n << "个元素（从小到大排列）:" << endl;
    InputArray(a, n);
    cout << "请输入待插入的值:";
    cin >> value;
    /************Space**************/
    Insert(a, n, value);
    printf("插入值后的数组元素为:\n");
    OutputArray(a, n + 1);	            //插入元素后，数组实际长度增加1
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

void Insert(int* p, int n, int val) {
    int i = 0, j;   //元素下标，为了记录插入位置
    /*************Program************/
    while (i < n && val > p[i])
        i++;
    for (j = n; j > i; j--)
        p[j] = p[j - 1];
    p[i] = val;
    /*************End************/
}