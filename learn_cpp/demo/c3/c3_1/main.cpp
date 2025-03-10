#include <iostream>
using namespace std;

int main() {
    int sum = 0;  // 数据（变量）
    for (int i = 1; i <= 100; i++) {  // 控制语句（循环）
        sum += i;  // 运算符（+=）
    }
    cout << "Sum = " << sum << endl;  // 输出结果
    return 0;
}
