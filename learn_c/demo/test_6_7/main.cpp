#include <stdio.h>                           // 这是编译预处理指令

// ============ c6_1 ==================
#if 0
#include <math.h>
#define M_PI 3.14

int main( )                                  // 定义主函数
{                                            // 函数开始的标志
    double x = 16.0;
    printf("Square root of %.2f: %.2f\n", x, sqrt(x));
    printf("2 raised to the power of 3: %.2f\n", pow(2, 3));
    printf("Sine of 90 degrees: %.2f\n", sin(M_PI / 2));

    return 0;
}
#endif

// ============ c6_2 ==================
#if 0
#include <ctype.h>

int main( )                                  // 定义主函数
{                                            // 函数开始的标志
    char c = 'a';
    printf("Uppercase of '%c': %c\n", c, toupper(c));

    char num = '5';
    if (isdigit(num)) {
        printf("'%c' is a digit.\n", num);
    } else {
        printf("'%c' is not a digit.\n", num);
    }
    return 0;

    return 0;
}
#endif

// ============ c6_3 ==================
#if 0
#include <time.h>

int main( )                                  // 定义主函数
{                                            // 函数开始的标志
    time_t now = time(NULL);
    printf("Current time: %s", ctime(&now));

    time_t start = time(NULL);
    for (int i = 0; i < 100000000; i++); // Simple delay
    time_t end = time(NULL);

    printf("Time taken for loop: %.2f seconds\n", difftime(end, start));

    return 0;
}
#endif

// ============ c6_4 ==================
#if 0
#include <stdlib.h>
#include <time.h>

int main( )                                  // 定义主函数
{                                            // 函数开始的标志
    srand(time(NULL)); // Seed the random number generator
    for (int i = 0; i < 5; i++) {
        printf("Random number %d: %d\n", i + 1, rand() % 100); // Random number between 0-99
    }

    return 0;
}
#endif

// ============ c7_1 ==================
#if 0
int main( )                                  // 定义主函数
{                                            // 函数开始的标志
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
#endif

// ============ c7_1_1 ==================
#if 0
int main( )                                  // 定义主函数
{                                            // 函数开始的标志
    float arr[5] = {111.1, 2.2, 3.3, 4.4, 5.5};

    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %.2f\n", i, arr[i]);
    }

    return 0;
}
#endif

// ============ c7_2 ==================
#if 0
int main( )                                  // 定义主函数
{                                            // 函数开始的标志
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }

    return 0;
}
#endif

// ============ c7_3 ==================
#if 0
int main( )                                  // 定义主函数
{                                            // 函数开始的标志
    int arr[3] = {10, 20, 30};
    printf("First element: %d\n", *(arr+1));
    return 0;
}
#endif

// ============ 练习 ==================
#if 1
int main( )                                  // 定义主函数
{                                            // 函数开始的标志
    float arr[5] = {111.1, 2.2, 3.3, 4.4, 5.5};
    //int nSize = sizeof(arr);
    // 获取数组的元素个数
    size_t size = sizeof(arr) / sizeof(arr[0]);

    float sum = 0;
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %.2f\n", i, arr[i]);
        sum += arr[i];
    }

    printf("sum = %.2f\n", sum); // 25.3

    float avr = sum/size;
    printf("avr = %.2f\n", avr); // 25.3
    return 0;
}
#endif


