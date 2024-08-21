/*设A为n×m矩阵（即n行m列），第i行第j列的元素是a(i,j)，把n×m矩阵A的行换成同序数的列，得到一个m×n矩阵，此矩阵叫做A的转置矩阵。
编程实现n×m矩阵的转置，矩阵的数据在[10,50]之间随机产生。
*/

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main() {
    const int N = 3;
    const int M = 4;
    int a[N][M], b[M][N];
    int i, j;
    cout << "随机产生" << N << "×" << M << "矩阵的元素：" << endl;
    srand(time(NULL));
    for (i = 0;i < N;i++)
        for (j = 0;j < M;j++)
            a[i][j] = 10 + rand() % 41;
    for (i = 0;i < N;i++) {
        for (j = 0;j < M;j++) {
            cout << setw(4) << a[i][j];     //输出矩阵a，并进行格式控制
            // program
            b[j][i] = a[i][j];
            // end
        }
        cout << endl;                //换行输出下一行
    }
    cout << "转置后的矩阵是:" << endl;
    for (i = 0;i < M;i++) {
        for (j = 0;j < N;j++)
            cout << setw(4) << b[i][j];	 //输出矩阵b，并进行格式控制		
        cout << endl;                //换行输出下一行
    }
    return 0;
}

