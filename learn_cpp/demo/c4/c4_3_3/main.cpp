#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int* ptr = arr;  // 数组名自动转换为指针

    // 使用指针访问数组元素
    for (int i = 0; i < 3; i++) {
        cout << "arr[" << i << "] = " << *(ptr + i) << endl;  // 指针加偏移量
    }

    return 0;
}
