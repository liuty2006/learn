#include <iostream>
using namespace std;

// 定义一个类表示点
class Point {
private:
    int x, y;

public:
    // 构造函数初始化点的位置
    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}

    // 成员函数用于移动点
    void move(int dx, int dy) {
        x += dx;
        y += dy;
    }

    // 成员函数输出点的位置
    void printPosition() const {
        cout << "Position: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // 创建对象 p
    Point p(0, 0);
    p.printPosition();  // 输出初始位置

    // 移动点
    p.move(5, 10);
    p.printPosition();  // 输出新的位置

    return 0;
}

