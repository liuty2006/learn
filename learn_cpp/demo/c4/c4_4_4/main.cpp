#include <iostream>
using namespace std;

// 通过指针修改数组中的元素
void modifyArray(int* arr, int size) {      // const - 不可以使用!!
    for (int i = 0; i < size; i++) {
        *(arr + i) *= 2;  // 每个元素翻倍
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    modifyArray(numbers, size); // 传递数组指针

    cout << "modify array: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
