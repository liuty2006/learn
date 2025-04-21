#include <iostream>
#include <string>
using namespace std;
#include <windows.h>

class Person {
public:
    string name;  // 公有成员，外部可以访问

    Person(string n, int a) {
        name = n;
        setAge(a);  // 调用私有函数
    }

    void introduce() {
        cout << "大家好，我是 " << name << "，今年 " << age << " 岁。" << endl;
    }

    void setAge(int a) {
        if (a >= 0 && a <= 150) {
            age = a;
        } else {
            cout << "年龄设置无效，必须在 0~150 之间。" << endl;
        }
    }

    int getAge() {
        return age;
    }

private:
    int age;  // 私有成员，外部无法访问

protected:
    string secret = "这是一个保护成员";  // 受保护成员，仅子类可访问
};

// 子类可以访问 protected 成员
class Student : public Person {
public:
    Student(string n, int a) : Person(n, a) {}

    void revealSecret() {
        cout << name << " 的秘密是：" << secret << endl;
    }
};

int main() {
    SetConsoleOutputCP(65001); // 设置控制台输出编码为 UTF-8
    Person p("小明", 20);
    p.introduce();
    // cout << p.age;      // ❌ 错误：无法访问私有成员
    // cout << p.secret;   // ❌ 错误：无法访问保护成员

    Student s("小红", 18);
    s.introduce();
    s.revealSecret();  // 子类访问 protected 成员

    return 0;
}
