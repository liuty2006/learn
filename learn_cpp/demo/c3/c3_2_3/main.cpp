#include <iostream>
using namespace std;

int main() {
    bool a = true, b = false;

    cout << "a && b: " << (a && b) << endl;  // 逻辑与
    cout << "a || b: " << (a || b) << endl;  // 逻辑或
    cout << "!a: " << (!a) << endl;          // 逻辑非

    return 0;
}
