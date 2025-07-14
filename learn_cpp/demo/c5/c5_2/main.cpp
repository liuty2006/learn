#include <iostream>
#include <string>
using namespace std;

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
    // 创建对象 - 栈
    Person person1("小明", 20);
    person1.introduce();

    // new - 堆
    Person *pPersion = new Person("小明2", 20);
    pPersion->introduce();
    delete pPersion;  // 不会自动析构!!

    // 当 main 函数结束时，person1 会自动被销毁，触发析构函数
    return 0;
}
// 