#include <iostream>
using namespace std;

int main() {
    int a = 5;  // 二进制：0101
    int b = 3;  // 二进制：0011

    cout << "a & b: " << (a & b) << endl;  // 位与
    cout << "a | b: " << (a | b) << endl;  // 位或
    cout << "a ^ b: " << (a ^ b) << endl;  // 位异或
    cout << "a << 1: " << (a << 1) << endl;  // 左移
    cout << "a >> 1: " << (a >> 1) << endl;  // 右移

    return 0;
}
