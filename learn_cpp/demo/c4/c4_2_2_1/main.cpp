#include <iostream>

void swapPointers(int *&p1, int *&p2) {
    int *temp = p1;
    p1 = p2;
    p2 = temp;
}

void swapValues(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int a = 10, b = 20;
    int *p1 = &a, *p2 = &b;

    std::cout << "before swapPointers: *p1 = " << *p1 << ", *p2 = " << *p2 << std::endl;
    swapPointers(p1, p2);
    std::cout << "after swapPointers: *p1 = " << *p1 << ", *p2 = " << *p2 << std::endl;

    //
    std::cout << "after swapPointers: a = " << a << ", b = " << b << std::endl;

    //
    swapValues(&a, &b);
    std::cout << "After swapValues: a = " << a << ", b = " << b << std::endl;

    return 0;
}
