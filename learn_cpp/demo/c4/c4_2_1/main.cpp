#include <iostream>
#include <windows.h>

void b() {
    std::cout << "进入 b 函数" << std::endl;
    std::cout << "执行 b 函数" << std::endl;
    std::cout << "退出 b 函数" << std::endl;
}

void a() {
    std::cout << "进入 a 函数" << std::endl;
    std::cout << "调用 b 函数" << std::endl;
    b();  // 调用 b 函数
    std::cout << "执行 a 函数" << std::endl;
    std::cout << "退出 a 函数" << std::endl;
}

int main() {
    SetConsoleOutputCP(65001); // 设置控制台输出编码为 UTF-8
    std::cout << "进入 main 函数" << std::endl;
    std::cout << "调用 a 函数" << std::endl;
    a();  // 调用 a 函数
    std::cout << "执行 main 函数" << std::endl;
    std::cout << "退出 main 函数" << std::endl;
    return 0;
}
