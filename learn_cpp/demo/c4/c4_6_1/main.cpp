#include <iostream>
using namespace std;

// 一个普通的加法函数
int add(int a, int b) {
    return a + b;
}

int main() {
    // 定义函数指针并指向 add 函数
    int (*funcPtr)(int, int) = add;

    // 通过函数指针调用函数 - 函数指针 funcPtr 指向 add，并通过 funcPtr(3, 5) 调用它
    cout << "Result: " << funcPtr(3, 5) << endl;

    return 0;
}
