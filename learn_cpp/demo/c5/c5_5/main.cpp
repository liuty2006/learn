#include <iostream>
using namespace std;
#include <windows.h>

// 抽象类（含纯虚函数）
class Animal {
public:
    // 虚函数：可以被派生类重写
    virtual void speak() const = 0; // 纯虚函数：没有函数体，= 0

    // 虚析构函数，避免内存泄漏
    virtual ~Animal() {
        cout << "Animal 析构函数调用。" << endl;
    }
};

// 派生类：Dog
class Dog : public Animal {
public:
    void speak() const override {
        cout << "狗：汪汪！" << endl;
    }

    ~Dog() {
        cout << "Dog 析构函数调用。" << endl;
    }
};

// 派生类：Cat
class Cat : public Animal {
public:
    void speak() const override {
        cout << "猫：喵喵！" << endl;
    }

    ~Cat() {
        cout << "Cat 析构函数调用。" << endl;
    }
};

// 多态调用函数
void makeAnimalSpeak(const Animal* animal) {
    animal->speak(); // 运行时多态：根据实际对象调用对应的函数
}

int main() {
    SetConsoleOutputCP(65001); // 设置控制台输出编码为 UTF-8
    Animal* a1 = new Dog();  // 基类指针指向派生类对象
    Animal* a2 = new Cat();

    makeAnimalSpeak(a1);
    makeAnimalSpeak(a2);

    // 释放内存，触发析构链
    delete a1;
    delete a2;

    return 0;
}
