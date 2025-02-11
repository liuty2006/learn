#include <stdio.h>                           // 这是编译预处理指令

// ============ c8_1 ==================
#if 0
int main() {
    // 使用字符数组
    char str1[20] = "Hello";
    printf("str1: %s\n", str1);

    // 修改字符数组内容
    str1[0] = 'h';
    printf("modify: %s\n", str1);

    // 使用字符串常量
    char *str2 = "Hello";
    printf("str2: %s\n", str2);

    // 字符串常量不可修改
    //str2[0] = 'h'; // 这行会导致编译错误，因为字符串常量是不可修改的

    return 0;
}
#endif

// ============ c8_2 ==================
#if 0
int main() {
    //char input[100] = "hello"; // 用于存储用户输入
    printf("input:\n");
    //gets(input);

    //
    char str[100];
    if (fgets(str, sizeof(str), stdin)) {
        printf("You entered: %s", str);
    }

    printf("output:\n");
    puts(str);
    return 0;
}
#endif

// ============ c8_3 ==================
#if 0
#include <string.h>
int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";
    printf("Length: %lu\n", strlen(str1));
    strcpy(str1, str2);
    printf("After copy: %s\n", str1);
    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }
    return 0;
}
#endif

// ============ c9_1 ==================
#if 0
int main() {
     int a = 10;
    int *p = &a;
    printf("Value of a: %d\n", *p);
    return 0;
}
#endif

// ============ c9_2 ==================
#if 0
int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;
    for (int i = 0; i < 3; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}
#endif

// ============ c9_3 ==================
#if 0
// 定义一个简单的加法函数
int add(int a, int b) {
    return a + b;
}
int main() {
    // 定义函数指针，指向返回类型为 int、参数为 (int, int) 的函数
    int (*funcPtr)(int, int);
    // 将函数地址赋给指针
    funcPtr = add;
    // 通过函数指针调用函数
    int result = funcPtr(10, 20);
    printf("The result of the addition is: %d\n", result);
    return 0;
}
#endif

// ============ c9_4 ==================

#if 1
#include <windows.h>  // 包含 Sleep 函数
void message() {
    printf("over!");
}

// 定义一个接受函数指针的函数
void performOperation(void (*callback)()) {
    Sleep(2000);    // 休眠2秒（2000毫秒），模拟耗时操作
    callback();
}
int main() {
    //
    performOperation(message);
    return 0;
}

#endif


