#include <iostream>
using namespace std;

int main() {
#if 0
    int32_t arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int32_t* ptr = arr;  // 数组名自动转换为指针
#else
    int16_t arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int16_t* ptr = arr;  // 数组名自动转换为指针
#endif
    // 使用指针访问数组元素
    for (int i = 0; i < 9; i++) {
        cout << "arr[" << i << "] addr: " << (ptr + i) << "  value: " << *(ptr + i) << endl;  // 指针加偏移量, arr[i] 等价于 *(ptr + i)。
    }

    return 0;
}
