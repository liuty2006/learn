#include <iostream>
using namespace std;

// 计算阶乘的递归函数
int factorial(int n) {
    if (n == 0){  // 基准情况
        return 1;
    }
    else{
        return n * factorial(n - 1);  // 递归调用
    }
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}

#if 0
int factorial(int n) {
    if (n == 0) {  // 基本情况
        return 1;
    } else {
        int result = n * factorial(n - 1);  // 递归调用
        cout << "Returning: " << n << " * factorial(" << n-1 << ") = " << result << endl;
        return result;
    }
}

int main() {
    int num = 5;
    cout << "Final Result: " << factorial(num) << endl;
    return 0;
}
#endif
