#include <iostream>
#include <iomanip>  // 引入头文件
using namespace std;
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001); // 设置控制台输出编码为 UTF-8
    double pi = 3.14159265358979;

    // ================== 设置浮点数精度 ==================

    // setprecision(n) 直接作用于所有有效数字（不固定小数点）
    cout << "Pi with 2 decimal places: " << setprecision(2) << pi << endl;
    cout << "Pi with 4 decimal places: " << setprecision(4) << pi << endl;

    // fixed 让 setprecision(n) 作用于小数点后的位数。
    cout << "Pi with 2 decimal places: " << fixed << setprecision(2) << pi << endl;
    cout << "Pi with 4 decimal places: " << fixed << setprecision(4) << pi << endl;

    // ================== 进制 ==================
    int num = 255;

    cout << "默认 (十进制): " << num << endl;
    cout << hex << "十六进制: " << num << endl;
    cout << oct << "八进制: " << num << endl;

    cout << showbase;       // showbase 让 hex 输出 0x 前缀，oct 输出 0 前缀
    cout << "showbase 十六进制: " << hex << num << endl;
    cout << "showbase 八进制: " << oct << num << endl;

    return 0;
}
