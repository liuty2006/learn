#include <iostream>
using namespace std;

typedef bool (*Operation)(int, int); // 定义函数指针类型

// 比较函数：升序排序
bool ascending(int a, int b) {
    return a > b;  // 如果 a > b，则交换（从小到大）
}

// 比较函数：降序排序
bool descending(int a, int b) {
    return a < b;  // 如果 a < b，则交换（从大到小）
}

// 排序函数（使用回调函数） - 采用 冒泡排序 逻辑
#if 0
void sortArray(int arr[], int size, bool (*compare)(int, int)) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (compare(arr[j], arr[j + 1])) {
                swap(arr[j], arr[j + 1]);  // 交换元素
            }
        }
    }
}
#else
void sortArray(int arr[], int size, Operation op) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (op(arr[j], arr[j + 1])) {
                swap(arr[j], arr[j + 1]);  // 交换元素
            }
        }

        // 打印当前数组状态
        for (int k = 0; k < size; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}
#endif
// 打印数组
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int numbers[] = {5, 2, 9, 1, 7};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // 使用升序排序
    cout << "Ascending order: ";
    sortArray(numbers, size, ascending);
    printArray(numbers, size);

    // 使用降序排序
    cout << "Descending order: ";
    sortArray(numbers, size, descending);
    printArray(numbers, size);

    return 0;
}
