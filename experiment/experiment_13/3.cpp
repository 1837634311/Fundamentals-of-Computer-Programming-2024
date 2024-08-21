/*
在D盘的某文件夹中新建文本文件salary.txt，在其中输入多名员工（不超过20人）的工号（4位整数）、基本工资、绩效工资、代扣费用并保存。
程序：从salary.txt中读取数据，存入二维数组中，然后按公式“应发工资=基本工资+绩效工资-代扣费用”计算出应发工资并存入二维数组中，
对二维数组的每列数据（“工号”列除外）求和并将求和结果存入二维数组中。最后，将所有数据按样张格式写入文本文件newsalary.txt中。
（1）本题的文件采用绝对路径方式进行访问，两个文件保存于同一文件夹中。
（2）请将自己的学号姓名输出到文件newsalary.txt的第一行。
*/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    string firstLine;
    float arr[7][5] = { 0 };
    // 定义整数变量n，用于记录数据行数
    int n = 0;
    // 修改文件地址为你的文件。请注意，Windows的文件路径分隔符为反斜杠（\），且需要使用（\）转义符号（并删除注释）
    ifstream inFile("D:\\salary.txt");
    ofstream outFile("D:\\newsalary.txt");
    // 如果文件打开失败，输出错误信息并退出程序
    if (!inFile || !outFile) {
        cout << "文件打开失败！" << endl;
        exit(0);
    }
    outFile << "学号-姓名" << endl;  // 自行修改（并删除注释）
    // 读取文件的第一行字符，补充并写入输出文件
    getline(inFile, firstLine);
    outFile << firstLine << "  应发工资" << endl;

    // 读取文件的数据，存储在二维数组中
    while (!inFile.eof()) {  // 判断文件是否结束
        for (int x = 0; x < 4; x++)
            inFile >> arr[n][x];

        // 另一种不使用.eof() 的写法。因为当文件末尾有空白行时，依旧返回 true，导致行数错误，在倒数第二行出现 0 或内存溢出。
        // while (inFile >> arr[n][0] >> arr[n][1] >> arr[n][2] >> arr[n][3]) {

        // 计算第五个数据，即应发工资
        arr[n][4] = arr[n][1] + arr[n][2] - arr[n][3];
        n++;
    }
    inFile.close();

    // 计算每列数据的总和
    for (int y = 0; y < n; y++)
        for (int x = 1; x < 5; x++)
            arr[n][x] += arr[y][x];

    // 将数据写入输出文件
    for (int y = 0; y < n + 1; y++) {  // 因为要输出总和，所以输出 n + 1 行
        if (y == n)
            // 如果为最后一行，输出"合计"
            outFile << "合计";
        else
            // 否则，输出姓名
            outFile << arr[y][0];

        for (int x = 1; x < 5; x++)
            outFile << setw(10) << arr[y][x];

        if (y != n)
            // 最后一行不换行
            outFile << endl;
    }
    return 0;
}
