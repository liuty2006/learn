#include <iostream>
using namespace std;

// 值传递
void valuePass(int a) {
    a = a * 2;
    cout << "Inside valuePass: " << a << "Address: " << &a << endl;
}

// 引用传递
void referencePass(int& a) {
    a = a * 2;      // 不需要解引用
    cout << "Inside referencePass: " << a << "Address: " << &a << endl;
}

void modifyByPointer(int *p) {
    if (p) {  // 需要检查指针是否为空
        *p = 20;  // 修改指针指向的值  - 需要解引用
        cout << "Inside modifyByPointer - Address in p: " << p << endl;
    }
}

int main() {
    int x = 5;

    cout << "x value: " << x << "Address: " << &x << endl;

    // 值传递，不会修改原变量
    valuePass(x);
    cout << "After valuePass: " << x << endl;

    // 引用传递，会修改原变量
    referencePass(x);
    cout << "After referencePass: " << x << endl;

    // 指针传递，会修改原变量
    modifyByPointer(&x);    //& - x地址
    cout << "After modifyByPointer, x = " << x << endl;  // a 变成 20

    return 0;
}
