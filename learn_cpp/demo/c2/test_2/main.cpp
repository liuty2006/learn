#include <iostream>
using namespace std;

// 枚举类型
enum Weekday { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

// 宏定义
#define PI 3.14159

int main() {
    // ============== 常量 ===================
    const int MAX_VALUE = 100;  // 常量
    // MAX_VALUE = 200;  // 编译错误，不能修改常量

    cout << "MAX_VALUE = " << MAX_VALUE << endl;

    // ============== 宏定义 ===================

    cout << "PI = " << PI << endl;


    // ============== 枚举类型 ===================
    Weekday today = Wednesday;

    cout << "Today is day number: " << today << endl;  // 输出数字，默认从 0 开始

    return 0;
}
