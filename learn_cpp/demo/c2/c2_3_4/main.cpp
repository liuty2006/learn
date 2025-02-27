#include <iostream>
using namespace std;

// 定义一个联合体，包含不同类型的成员
union Data {
    int i;
    float f;
    char c;
};

int main() {
    // 创建联合体变量并赋值
    Data data;
    data.i = 10;  // 设置整数值

    // 输出整数值
    cout << "Data.i: " << data.i << endl;

    // 改变联合体的值并访问其他成员
    data.f = 3.14;  // 设置浮点数值
    cout << "Data.f: " << data.f << endl;

    // 注意：联合体中只有一个成员的值有效
    data.c = 'A';  // 设置字符值
    cout << "Data.c: " << data.c << endl;

    // 输出联合体成员的值
    cout << "Data.i after setting Data.c: " << data.i << endl;

    return 0;
}
