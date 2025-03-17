#include <iostream>
using namespace std;

typedef int (*Operation)(int, int); // 定义函数指针类型

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }

void compute(int x, int y, Operation op) {  // typedef 让代码更清晰，使 Operation 作为函数指针类型，提高可读性
    cout << "Result: " << op(x, y) << endl;
}

int main() {
    compute(10, 3, add);
    compute(10, 3, subtract);
    return 0;
}
