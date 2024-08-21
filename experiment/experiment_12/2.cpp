// 题目详见 table.md
// 测试数据：\
1025 张小华 19 92.5 85 98.5 93.5 95 \
1026 李梅 20 91.5 86 89 94.5 90

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class athlete {
    int No, Age;
    string Name;
    float Score[5];
public:
    void InputData() {
        cout << "请输入运动员的编号、姓名、年龄、五位裁判的打分：" << endl;
        cin >> No >> Name >> Age;
        for (int i = 0; i < 5; i++)
            cin >> Score[i];
    }
    float GetMaxScore() {
        int max = 0;
        for (int i = 0; i < 5; i++)
            if (Score[i] > Score[max])
                max = i;
        return Score[max];
    }
    float GetMinScore() {
        int min = 0;
        for (int i = 0; i < 5; i++)
            if (Score[i] < Score[min])
                min = i;
        return Score[min];
    }
    float GetFinalScore() {
        float res = 0;
        for (int i = 0; i < 5; i++)
            res += Score[i];
        res = (res - GetMaxScore() - GetMinScore()) / 3;
        return res;
    }
    void OutputData(bool index) {
        switch (index) {
        case true:
            cout << No << setw(8) << Name << setw(6) << Age;
            cout << fixed << setprecision(2) << setw(8) << GetMaxScore() << setw(8) << GetMinScore() << setw(10) << GetFinalScore() << endl;
            break;
        case false:
            cout << setw(8) << Name << setw(6) << Age;
            cout << fixed << setprecision(2) << setw(8) << GetMaxScore() << setw(8) << GetMinScore() << setw(10) << GetFinalScore() << endl;
            break;
        }
    }
};
int main() {
    athlete ath1, ath2;

    ath1.InputData();
    ath2.InputData();

    cout << "编号    姓名  年龄  最高分  最低分  最终得分" << endl;
    ath1.OutputData(true);
    ath2.OutputData(true);
    return 0;
}
