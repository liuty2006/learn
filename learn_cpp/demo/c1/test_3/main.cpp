#include <iostream> // 引入输入输出流库

// 定义一个类，负责输出Hello World
class HelloWorld {
public:
    void printMessage() const {
        std::cout << "Hello, World!" << std::endl; // 输出 "Hello, World!"
    }
};

int main() {
    HelloWorld hello;  // 创建一个HelloWorld类的对象
    hello.printMessage(); // 调用printMessage方法输出信息
    return 0; // 返回 0，表示程序成功结束
}
