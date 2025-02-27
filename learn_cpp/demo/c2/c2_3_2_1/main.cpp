#include <iostream>
#include <string>
using namespace std;

int main() {
    // C 风格字符串
    char cStr[] = "Hello, World!";
    cout << "C-style string: " << cStr << endl;

    // C++ 风格字符串
    string cppStr = "Hello, World!";
    cout << "C++-style string: " << cppStr << endl;

    // 修改 C 风格字符串
    cStr[0] = 'h';  // 直接修改字符数组
    cout << "Modified C-style string: " << cStr << endl;

    // 修改 C++ 风格字符串
    cppStr[0] = 'h';  // 使用下标操作符修改
    cout << "Modified C++-style string: " << cppStr << endl;

    return 0;
}
