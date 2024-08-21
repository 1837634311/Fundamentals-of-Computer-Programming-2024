/*  百钱百鸡问题。公鸡5元钱一只，母鸡3元钱一只，小鸡三只1元钱（小鸡只数是3的整数倍）。
	现在用m块钱买了m只鸡，问公鸡、母鸡、小鸡各多少只？请编程实现

【输出】
请输入购买的只数（钱数）: 100
公鸡    母鸡    小鸡      //cout<<left<<setw(8)<<"公鸡"<<setw(8)<<"母鸡"<<setw(8)<<"小鸡"<<endl;
0       25      75
4       18      78
8       11      81
12      4       84

编程要求：
1、请在注释信息Program和End之间完成代码，程序其余位置的代码不要改动！
2、编程时，只能使用已定义的变量
3、程序只能使用规定的结构，本题要求用嵌套的for循环实现。
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int cock, hen, chicken, m;
	cout << "请输入购买的只数（钱数）:";
	cin >> m;
	/*************************Program***************************/
	cout << left << setw(8) << "公鸡" << setw(8) << "母鸡" << setw(8) << "小鸡" << endl;
	for (cock = 0; cock <= m / 5; cock++) { // 遍历公鸡可能的取值
		for (hen = 0; hen <= (m - cock * 5) / 3; hen++) { // 在公鸡数确定的情况下，遍历母鸡可能的取值
			chicken = m - cock - hen; // 小鸡的取值
			if (chicken % 3 == 0 && (cock * 5 + hen * 3 + chicken / 3) == m) // 结果符合要求才输出
				cout << left << setw(8) << cock << setw(8) << hen << setw(8) << chicken << endl;
		}
	}
	/*************************End***************************/
	return 0;
}
