#include <iostream>
using namespace std;

// 使用指针遍历数组并计算总和
int sumArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);  // 通过指针访问数组元素
    }
    return sum;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "sum of array: " << sumArray(numbers, size) << endl;
    return 0;
}
