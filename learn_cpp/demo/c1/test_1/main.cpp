#include <iostream>
using namespace std;

// 类定义
class Car {
private:
    string brand;
    int year;

public:
    // 构造函数
    Car(string b, int y) : brand(b), year(y) {}

    // 析构函数
    ~Car() {
        cout << "Car object destroyed!" << endl;
    }

    // 成员函数
    void display() {
        cout << "Car brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    // 创建对象
    Car myCar("Toyota", 2020);

    // 调用成员函数
    myCar.display();

    return 0;
}

