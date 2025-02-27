#include <iostream>
#include <string>  // 导入string库
using namespace std;

int main() {
    // 定义并初始化一个字符串
    string str = "Hello, C++!";

    // 输出字符串
    cout << "String: " << str << endl;

    // 字符串拼接
    string str2 = " How are you?";
    string str3 = str + str2;
    cout << "Concatenated string: " << str3 << endl;

    return 0;
}
