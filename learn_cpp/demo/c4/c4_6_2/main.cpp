#include <iostream>
using namespace std;

// 定义两个数学运算函数
int add(int a, int b) { return a + b; }
int multiply(int a, int b) { return a * b; }

// 计算函数，接受一个函数指针作为参数
void compute(int x, int y, int (*operation)(int, int)) {
    cout << "Result: " << operation(x, y) << endl;
}

int main() {
    // 函数 compute 使用函数指针 operation，动态调用 add 或 multiply
    compute(4, 5, add);       // 计算加法
    compute(4, 5, multiply);  // 计算乘法
    return 0;
}
