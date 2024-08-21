/* 从键盘输入n个学生的成绩，计算平均成绩，并输出成绩最高和最低的同学信息

【输出】
输入学生人数：10
输入成绩：78 90 85 65 55 90 100 83 92 70
平均成绩：80.80
最高分是第7位同学，其成绩为：100
最低分是第5位同学，其成绩为：55
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const int  N = 10;
    int score[N], n, i, j, k, max, min;                   // n为数组实际长度
    float sum = 0.0, average = 0.0;
    cout << "请输入学生人数：";
    cin >> n;            // 输入数组实际长度
    cout << "请输入" << n << "个学生的成绩：" << endl;
    for (i = 0;i < n;i++)
        cin >> score[i];    //输入数组元素的值
    /******************Program********************/
    for (i = 0; i < n; i++)
        sum += score[i];
    average = sum / n;
    cout << "平均成绩：" << fixed << setprecision(2) << average << endl;

    // 初始化j和k为0
    j = k = 0;
    // 遍历数组score，i从0到n-1
    for (i = 0; i < n; i++) {
        // 如果当前元素score[j]小于score[i]，则更新最大值下标j为i
        if (score[j] < score[i])
            j = i;
        // 如果当前元素score[k]大于score[i]，则更新最小值下标k为i
        if (score[k] > score[i])
            k = i;
    }
    /*******************End***********************/
    cout << "最高分是第" << j + 1 << "位同学,其成绩为：" << score[j] << endl;
    cout << "最低分是第" << k + 1 << "位同学,其成绩为：" << score[k] << endl;
    return 0;
}

