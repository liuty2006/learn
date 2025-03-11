#include <iostream>
#include <string>
using namespace std;

void printMessage(string msg) { // 按值传递
    cout << "message: " << msg << endl;
}

void modifyMessage(string& msg) { // 按引用传递
    msg += " Have a great day!";
}

int main() {
    string text = "Hello, C++!";
    printMessage(text);

    // 修改
    modifyMessage(text);
    cout << "modify string: " << text << endl;

    return 0;
}
