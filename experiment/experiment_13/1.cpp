/*
在ASCII码65~122的范围内（含边界值），随机产生40个字符，将这些字符输出到文件myfile.txt中，每个字符前加一个空格。
（1）本题的文件采用相对路径方式进行访问。
（2）请将自己的学号姓名输出到文件myfile.txt的第一行。
*/
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand((unsigned int)time(NULL));
    ofstream outFile;
    outFile.open("myfile.txt");  // 运行程序以后，在你的项目的文件夹下面找到这个文件（并删除注释）
    if (!outFile.is_open()) {
        cout << "没有打开文件！" << endl;
        exit(0);
    }
    outFile << "学号-姓名" << endl;  // 自行修改（并删除注释）
    for (int i = 0; i < 40; i++)
        // 生成一个0-57之间的随机数，然后将其转换为ASCII码，最后将其转换为字母
        outFile << (char)(rand() % 58 + 65) << " ";

    outFile.close();
    return 0;
}