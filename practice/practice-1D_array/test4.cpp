/* 用一个一维数组，实现删除数组中的重复元素

【输出】
请输入数组实际长度：10
请输入数组的10个元素：1 2 1 7 3 4 3 5 2 7
删除重复元素后的数列为：1 2 7 3 4 5

编程要求：完成子函数定义，可在子函数中定义所需的变量等。
*/

#include <iostream>
#include <iomanip>
using namespace std;
/******************Program********************/
    //子函数定义：删除数组中的重复元素
int Del_Same(int a[], int n) {
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            // 如果a[i]等于a[j]
            if (a[i] == a[j]) {
                // 从j开始，到n-1结束
                for (int k = j; k < n - 1; k++)
                    // a[k]等于a[k+1]
                    a[k] = a[k + 1];
                // 数组长度减1
                n--;
            }
    // 返回数组长度n
    return n;
}
/*******************End***********************/

int main() {
    const int  N = 10;
    int a[N], i, n, len;
    cout << "请输入数组实际长度：";
    cin >> n;
    cout << "请输入数组的" << n << "个元素：" << endl;
    for (i = 0;i < n;i++)
        cin >> a[i];
    len = Del_Same(a, n);
    cout << "删除重复元素后的数列为：" << endl;
    for (i = 0;i < len;i++)
        cout << setw(4) << a[i];
    cout << endl;
    return 0;
}
