#include <iostream>
#include <string>
using namespace std;

// 定义一个名为 Car 的类
class Car {
public:
    // 成员变量
    string brand;
    int year;
    float engineCapacity;

    // 构造函数
    Car(string b, int y, float e) {
        brand = b;
        year = y;
        engineCapacity = e;
    }

    // 成员函数
    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
        cout << "Engine Capacity: " << engineCapacity << "L" << endl;
    }
};

int main() {
    // 创建类对象
    Car car1("Toyota", 2022, 2.5);
    car1.displayInfo();  // 调用成员函数

    return 0;
}
