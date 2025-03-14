#include <iostream>
using namespace std;

int main() {
#if 1
    int32_t arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};     // 4 字节
#else
    int16_t arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};     // 2 字节
#endif
    // 输出数组元素
    for (int i = 0; i < 9; i++) {
        cout << "arr[" << i << "] addr: " << &arr[i] << "  value: " << arr[i] << endl;      // arr每次增加 4（因为 int 变量占 4 字节）
    }

    return 0;
}
