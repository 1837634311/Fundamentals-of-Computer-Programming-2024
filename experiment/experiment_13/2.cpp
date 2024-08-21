/*
先在D盘的某文件夹中新建文本文件source.txt，在其中输入10个整数。
程序：从文件source.txt中读取数据，将其中的完数写入文件destination.txt中。
（1）本题的文件采用绝对路径方式进行访问，两个文件保存于同一文件夹中。
（2）请将自己的学号姓名输出到文件destination.txt的第一行。
*/
#include <fstream>
#include <iostream>
using namespace std;

bool perfectNumber(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            sum += i;
    return sum == n;
}

/* 还有什么算法是比打表的空间复杂度低的呢？
bool perfectNumber(int n) {
    int arr[5] = { 6, 28, 496, 8128, 33550336 };
    for (int i = 0; i < 5; i++)
        if (n == arr[i])
            return true;
    return false;
}
*/

int main() {
    // 修改文件地址为你的文件。请注意，Windows的文件路径分隔符为反斜杠（\），且需要使用（\）转义符号（并删除注释）
    ifstream inFile("D:\\source.txt");
    ofstream outFile("D:\\destination.txt");
    if (!inFile.is_open() || !outFile.is_open()) {
        cout << "文件打开错误！" << endl;
        return 0;
    }
    outFile << "学号-姓名" << endl;  // 自行修改（并删除注释）
    while (!inFile.eof()) {  // 判断文件是否结束
        int n;
        inFile >> n;
        if (perfectNumber(n))
            outFile << n << " ";
    }
    inFile.close();
    outFile.close();
    return 0;
}