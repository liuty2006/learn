#include <iostream>
using namespace std;

// 值传递
void valuePass(int a) {
    a = a * 2;
    cout << "Inside valuePass: " << a << endl;
}

// 引用传递
void referencePass(int& a) {
    a = a * 2;
    cout << "Inside referencePass: " << a << endl;
}

int main() {
    int x = 5;
    valuePass(x);  // 值传递，不会修改原变量
    cout << "After valuePass: " << x << endl;

    referencePass(x);  // 引用传递，会修改原变量
    cout << "After referencePass: " << x << endl;

    return 0;
}
