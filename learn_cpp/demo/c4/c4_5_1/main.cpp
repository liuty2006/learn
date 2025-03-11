#include <iostream>
using namespace std;

// 重载函数
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    cout << "Sum of integers: " << add(3, 4) << endl;
    cout << "Sum of doubles: " << add(3.5, 4.5) << endl;
    return 0;
}
