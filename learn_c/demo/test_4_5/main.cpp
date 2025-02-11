#include <stdio.h>                           // 这是编译预处理指令

// ============ c4_1 ==================
#if 0
int main( )                                  // 定义主函数
{                                            // 函数开始的标志
    int number = 10;
    // 检查 number 是否大于 5
    if (number > 5) {
        printf("The number is greater than 5.");
    }
    return 0;
}
#endif

// ============ c4_2 ==================
#if 0
int main( )                                  // 定义主函数
{                                            // 函数开始的标志
    int age = 18;
    if (age >= 18) {
        printf("You are an adult.\n");
    } else {
        printf("You are a minor.\n");
    }

    return 0;
}
#endif

// ============ c4_3 ==================
#if 0
int main( )                                  // 定义主函数
{                                            // 函数开始的标志
    int day = 3;
    switch (day) {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    default:
        printf("Other day\n");
    }

    return 0;
}
#endif

// ============ c4_4 ==================
#if 0
int main( )                                  // 定义主函数
{                                            // 函数开始的标志
    for (int i = 0; i < 10; i++) {
        printf("i = %d\n", i);
    }
    return 0;
}
#endif

// ============ c4_5 ==================
#if 0
int main( )                                  // 定义主函数
{                                            // 函数开始的标志
    int i = 0;
    while (i < 10) {
        printf("i = %d\n", i);
        i++;
    }

    return 0;
}
#endif

// ============ c4_6 ==================
#if 0
int main( )                                  // 定义主函数
{                                            // 函数开始的标志
    int i = 0;
    do {
        printf("i = %d\n", i);
        i++;
    } while (i < 10);

    return 0;
}
#endif

// ============ c4_7 ==================
#if 0
int main( )                                  // 定义主函数
{                                            // 函数开始的标志
    int i = 0;
    do {
        printf("i = %d\n", i);
        i++;

        if(i == 5) break;
        //if(i == 5) continue;
    } while (i < 10);

    return 0;
}
#endif

// ============ c5_1 ==================
#if 0
int add(int a, int b) {
    return a + b;
}
int main() {
    int sum = add(10, 20);
    printf("Sum: %d\n", sum);
    return 0;
}
#endif

// ============ c5_2 ==================
#if 0
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 5, y = 10;
    // 调用函数并传递变量的地址
    printf("before: x = %d, y = %d\n", x, y);
    swap(&x, &y); // 传递变量的地址
    // 输出交换后的值
    printf("after: x = %d, y = %d\n", x, y);
    return 0;
}
#endif

// ============ c5_3 ==================
#if 0
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    bool b;
    int n = factorial(2);
    printf("n = %d\n", n);
    return 0;
}
#endif

// ============ 练习 ==================
int checkNthBit(int num, int n) {
    // 右移n-1位并与1进行按位与操作
    return (num >> (n - 1)) & 1;
}

int main() {
    bool b;
    int n = checkNthBit(12, 2);
    printf("n = %d\n", n);
    return 0;
}
