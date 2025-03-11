#include <iostream>
using namespace std;

// 定义一个加法函数
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 4);  // 调用函数
    cout << "Result: " << result << endl;
    return 0;
}
