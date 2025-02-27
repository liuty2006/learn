#include <iostream>
using namespace std;

int main() {
    // 定义一个整型数组，包含5个元素
    int arr[5] = {1, 2, 3, 4, 5};

    // 通过下标访问数组元素并输出
    cout << "Array elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}
