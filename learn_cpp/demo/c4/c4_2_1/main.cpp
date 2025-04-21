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

void log_message()
{
    printf("文件名: %s\n", __FILE__); // 当前文件的名称
    printf("当前行号: %d\n", __LINE__); // 当前行的行号
    printf("编译日期: %s\n", __DATE__); // 编译的日期
    printf("编译时间: %s\n", __TIME__); // 编译的时间
    printf("函数名: %s\n", __func__); // 当前函数的名称（C99新增）
}

int main() {
    SetConsoleOutputCP(65001); // 设置控制台输出编码为 UTF-8
    std::cout << "进入 main 函数" << std::endl;
    std::cout << "调用 a 函数" << std::endl;
    a();  // 调用 a 函数
    std::cout << "执行 main 函数" << std::endl;
    std::cout << "退出 main 函数" << std::endl;

    log_message();

    return 0;
}
