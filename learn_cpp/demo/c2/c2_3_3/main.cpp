#include <iostream>
using namespace std;

// 定义一个结构体表示点
struct Point {
    int x;
    int y;
};

int main() {
    // 创建一个结构体变量并初始化
    Point p1 = {10, 20};

    // 访问结构体成员
    cout << "Point p1: (" << p1.x << ", " << p1.y << ")" << endl;

    // 修改结构体成员
    p1.x = 30;
    p1.y = 40;
    cout << "Modified Point p1: (" << p1.x << ", " << p1.y << ")" << endl;

    return 0;
}
