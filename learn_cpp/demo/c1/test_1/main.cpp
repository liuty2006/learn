//#include <windows.h>
#include <iostream>
using namespace std;

// 洗衣机类
class WashingMachine {
public:
    void addWater() {
        cout << "洗衣机: 注水" << endl;
    }

    void startWashing() {
        cout << "洗衣机: 启动洗衣" << endl;
    }

    void wash() {
        cout << "洗衣机: 洗" << endl;
    }

    void endWashing() {
        cout << "洗衣机: 结束洗衣" << endl;
    }
};

// 人类
class Person {
public:
    void putClothes() {
        cout << "人: 放衣服" << endl;
    }

    void addDetergent() {
        cout << "人: 放洗衣液" << endl;
    }

    void takeClothes() {
        cout << "人: 取衣服" << endl;
    }
};

int main() {
    //SetConsoleOutputCP(65001); // 设置控制台输出编码为 UTF-8
    Person person;
    WashingMachine machine;

    // 按顺序执行洗衣过程
    person.putClothes();
    person.addDetergent();
    machine.addWater();
    machine.startWashing();
    machine.wash();
    machine.endWashing();
    person.takeClothes();

    return 0;
}
