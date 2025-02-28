#include <iostream>
using namespace std;

// 定义一个联合体，包含不同类型的成员
union Data {
    int i;    // 4 bytes
    float f;  // 4 bytes
    char c;   // 1 byte
};

// 联合体使得不同类型的数据共享同一块内存，节省内存空间，但每次只能使用一个成员
int main() {
    // 创建联合体变量并赋值
    Data data;
    data.i = 10;  // 设置整数值

    // 输出整数值
    cout << "Data.i: " << data.i << " - " << sizeof(data)<< endl;

    // 改变联合体的值并访问其他成员
    data.f = 3.14;  // 设置浮点数值
    cout << "Data.f: " << data.f << " - " << sizeof(data)<< endl;

    // 输出联合体成员的值
    cout << "Data.i after setting Data.f: " << data.i << endl;

    // 注意：联合体中只有一个成员的值有效
    data.c = 'A';  // 设置字符值
    cout << "Data.c: " << data.c << " - " << sizeof(data)<< endl;

    // 输出联合体成员的值
    cout << "Data.i after setting Data.c: " << data.i << endl;

    return 0;
}
