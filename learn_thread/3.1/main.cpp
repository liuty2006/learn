#include <iostream>
#include <thread>

void threadFunction() {
    std::cout << "Hello from thread!" << std::endl;
}

int main() {
    std::thread t(threadFunction);
    t.join(); // 等待线程执行完毕
    return 0;
}
