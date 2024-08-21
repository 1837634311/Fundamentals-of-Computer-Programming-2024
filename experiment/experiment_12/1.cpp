// 题目详见 table.md

#include <iostream>
#include <string>
using namespace std;

class Cuboid {
    string Name;
    int Length, Width, Height;
public:
    // 无参数的构造函数
    Cuboid() : Name(""), Length(0), Width(0), Height(0) {}
    // 带参数的构造函数
    Cuboid(string name, int length, int width, int height) : Name(name), Length(length), Width(width), Height(height) {}

    // 析构函数
    ~Cuboid() {
        cout << "长方体消失了" << endl;
    }
    void SetName(string name) {
        Name = name;
    }
    void SetLength(int length) {
        Length = length;
    }
    void SetWidth(int width) {
        Width = width;
    }
    void SetHeight(int height) {
        Height = height;
    }
    string GetName() {
        return Name;
    }
    int GetLength() {
        return Length;
    }
    int GetWidth() {
        return Width;
    }
    int GetHeight() {
        return Height;
    }
    int GetVolume() {
        return Length * Width * Height;
    }
    int GetSphere() {
        return (Length * Width + Length * Height + Width * Height) * 2;
    }
    void DispInfo() {
        cout << "**************************" << endl;
        cout << "长方体的名称是：" << Name << endl;
        cout << "其长、宽、高分别是：" << Length << ' ' << Width << ' ' << Height << endl;
        cout << "其体积是：" << GetVolume() << endl;
        cout << "其表面积是：" << GetSphere() << endl;
        cout << "==========================" << endl;
    }
};

int main() {
    // 构造两个长方形对象，其中长方形2在构造时定义
    Cuboid c1, c2("Cub2", 6, 4, 5);

    // 定义长方形1
    string name;
    int length, width, height;
    cout << "请输入第一个长方体名称、长、宽、高：" << endl;
    cin >> name >> length >> width >> height;
    c1.SetName(name);
    c1.SetLength(length);
    c1.SetWidth(width);
    c1.SetHeight(height);

    c1.DispInfo();
    c2.DispInfo();
    cout << "两个长方体叠加的高度是：" << c1.GetHeight() + c2.GetHeight() << endl;
    return 0;
}