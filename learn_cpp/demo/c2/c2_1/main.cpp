#include <iostream>
using namespace std;

int main()
{
    int a = 10;       // 整数类型
    short b = 5;      // 短整数类型
    long l = 100000;  // 长整数类型
    long long ll = 1000000000;  // 更长的整数类型

    cout << "a = " << a << " - " << sizeof(a) << endl;
    cout << "b = " << b << " - " << sizeof(b) << endl;
    cout << "c = " << l << " - " << sizeof(l) << endl;
    cout << "d = " << ll << " - " << sizeof(ll) << endl;

    float f = 3.14f;      // 单精度浮点数
    double db = 3.14159;   // 双精度浮点数

    cout << "f = " << f << endl;
    cout << "db = " << db << endl;

    char c = 'A';  // 字符类型

    cout << "c = " << c << endl;

    bool isTrue = true;
    bool isFalse = false;

    cout << "isTrue = " << isTrue << endl;
    cout << "isFalse = " << isFalse << endl;

    return 0;
}

