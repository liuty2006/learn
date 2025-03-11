#include <iostream>
using namespace std;

// 定义加法函数
int add(int a, int b) {
    return a + b;
}

int main() {
#if 0
    int a = 5, b = 10;
    int sum = a + b;
    cout << "Sum: " << sum << endl;

    int x = 20, y = 30;
    int sum2 = x + y;
    cout << "Sum: " << sum2 << endl;
#else
    // 使用函数 - add
    cout << "Sum: " << add(5, 10) << endl;
    cout << "Sum: " << add(20, 30) << endl;
#endif

    return 0;
}
