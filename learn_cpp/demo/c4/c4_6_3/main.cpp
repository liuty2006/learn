#include <iostream>
using namespace std;

// 三个运算函数
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }

int main() {
    // 函数指针数组 - 函数指针数组可以存储多个函数，并在运行时动态选择调用哪一个
    int (*operations[3])(int, int) = {add, subtract, multiply};

    int x = 6, y = 2;

    // 遍历并调用不同的运算函数
    // 使用函数指针实现多态
    for (int i = 0; i < 3; i++) {
        cout << "Operation " << i << " result: " << operations[i](x, y) << endl;
    }

    return 0;
}
