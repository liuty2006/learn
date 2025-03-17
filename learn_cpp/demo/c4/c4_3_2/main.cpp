#include <iostream>
using namespace std;

int main() {
#if 1
    int32_t arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }; // 4 字节
#else
    int16_t arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }; // 2 字节
#endif

    // 输出二维数组元素
    for (int i = 0; i < 3; i++) {   // 二维数组存储方式： 先存第一行的所有数据，再存第二行
        for (int j = 0; j < 3; j++) {
            cout << "arr[" << i << "][" << j << "] addr:  " << &arr[i][j] << "  value: " << arr[i][j] << endl;  // 内存地址递增规则： 依次增加 sizeof(元素类型)
        }
    }

    return 0;
}
