#include <iostream>
#include <string>
using namespace std;
#include <windows.h>

class Person {
private:
    string name;
    int age;

public:
    // 构造函数
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "构造函数被调用：创建了 " << name << "，年龄 " << age << " 的对象。" << endl;
    }

    // 成员函数
    void introduce() {
        cout << "大家好，我是 " << name << "，今年 " << age << " 岁。" << endl;
    }

    // 析构函数
    ~Person() {
        cout << "析构函数被调用：" << name << " 对象即将被销毁。" << endl;
    }
};

int main() {
    SetConsoleOutputCP(65001); // 设置控制台输出编码为 UTF-8
    // 创建对象
    Person person1("小明", 20);
    person1.introduce();

    // 当 main 函数结束时，person1 会自动被销毁，触发析构函数
    return 0;
}
