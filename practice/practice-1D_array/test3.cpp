/* 编程实现：定义长度为20的整型一维数组，数组元素为[1,50]范围内的随机数。输出该数组，删除其中的素数，并输出删除以后的数组。

【输出】
请输入数组实际长度：10
随机产生的10个元素为：47 18 8 40 6 33 49 31 30 39
删除素数后的数组元素为：18 8 40 6 33 49 30 39

编程要求：完成子函数定义，可在子函数中定义所需的变量等。
*/

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int Prime(int n) {
    int i, flag = 1;
    if (n == 1) return 0; //单独处理1
    for (i = 2;i <= n / 2;i++)
        if (n % i == 0) {
            flag = 0;
            break;
        }
    return flag;
}

void OutputArray(int a[], int n) {
    int i;
    for (i = 0;i < n;i++)
        cout << setw(4) << a[i];
    cout << endl;
}
/******************Program********************/
    //子函数定义：随机产生数组元素
void Rand_Array(int a[], int n) {
    srand((unsigned int)time(NULL));
    for (int i = 0;i < n;i++)
        a[i] = rand() % 50 + 1;
}
/*******************End***********************/

/******************Program********************/
    //子函数定义：删除数组中的素数元素
int Del_Prime(int a[], int n) {
    // 遍历数组a
    for (int i = 0; i < n; i++) {
        // 如果当前元素是质数
        if (Prime(a[i])) {
            // 将当前元素后面的所有元素向前移动一位
            for (int j = i; j < n - 1; j++) {
                a[j] = a[j + 1];
            }
            // 长度减一
            i--;
            n--;
        }
    }
    // 返回新的长度
    return n;
}
/*******************End***********************/

int main() {
    const int N = 20;
    int a[N], n;
    cout << "请输入数组实际长度：";
    cin >> n;
    Rand_Array(a, n);
    cout << "随机产生的" << n << "个元素为：" << endl;
    OutputArray(a, n);
    n = Del_Prime(a, n);
    cout << "删除素数后的数组元素为：" << endl;
    OutputArray(a, n);
    return 0;
}

