#include <stdio.h>                           // 这是编译预处理指令

// ============ c1_1 ==================
#if 0
int main( )                                  // 定义主函数
{                                            // 函数开始的标志
    printf ("This is a C program.\n");          // 输出所指定的一行信息
    return 0;                                   // 函数执行完毕时返回函数值0
}
#endif

// ============ c2_1 ==================

#if 0
int main() {
    int age;
    float height;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height : ");
    scanf("%f", &height);
    printf("Your age is: %d\n", age);
    printf("Your height is: %.2f\n", height);

    return 0;
}
#endif

// ============ c2_2 ==================
#if 0
#include <stdint.h>
int main() {
    // linux - 8; win - 4
    printf("sizeof(long): %zu bytes\n", sizeof(long));

    int64_t myLong = 123456789012345;

    // 输出类型大小 linux - 8; win - 8
    printf("sizeof(int64_t): %zu bytes\n", sizeof(int64_t));

    // 使用变量
    printf("Value of myLong: %lld\n", myLong);

    return 0;
}
#endif

// ============ c2_3 ==================
#if 0
int main()
{
    int num = 42;
    // 输出二进制形式
    for (int i = sizeof(num) * 8 - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0) printf(" ");  // 每8位加空格分隔
    }
    return 0;
}
#endif

// ============ c2_4 ==================
#if 1
int main()
{
int num = 42;
    // 输出十六进制
    printf("HEX: 0x%X\n", num);  // %X 输出大写十六进制
    printf("HEX: 0x%x\n", num);  // %x 输出小写十六进制
    return 0;
}
#endif

// ============ c3_1 ==================
#if 0
int main()
{
    int a = 10, b = 3;
    printf("Sum: %d\n", a + b);		// 加
    printf("Difference: %d\n", a - b);	// 减
    printf("Product: %d\n", a * b);		// 乘
    printf("Quotient: %d\n", a / b);		// 除
    printf("Remainder: %d\n", a % b);	// 取模 - 返回两个整数相除的余数
}
#endif
// ============ c3_2 ==================
#if 0
int main()
{
    int x = 5, y = 10;
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);
    printf("x > y: %d\n", x > y);
    printf("x < y: %d\n", x < y);
    printf("x >= y: %d\n", x >= y);
    printf("x <= y: %d\n", x <= y);
}
#endif
// ============ c3_3 ==================
#if 0
int main()
{
    int a = 1, b = 0;
    printf("a && b: %d\n", a && b);  // 与：同时为真
    printf("a || b: %d\n", a || b);  // 或：至少一个为真
    printf("!a: %d\n", !a);          // 非：取反

}
#endif
// ============ c3_4 ==================
#if 0
int main()
{
    int num = 5;
    printf("Initial value: %d\n", num);
    num += 3; // num = num + 3
    printf("After += 3: %d\n", num);
    num -= 2; // num = num - 2
    printf("After -= 2: %d\n", num);
    num *= 4; // num = num * 4
    printf("After *= 4: %d\n", num);
    num /= 2; // num = num / 2
    printf("After /= 2: %d\n", num);
}
#endif
// ============ c3_5 ==================
#if 0
int printbinary(int num)
{
    //int num = 42;
    // 输出二进制形式
    for (int i = sizeof(num) * 8 - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0) printf(" ");  // 每8位加空格分隔
    }
    printf("\n");
    return 0;
}

int main()
{
    int a = 5;    // 二进制 0101
    printbinary(a);
    int b = 3;    // 二进制 0011
    printbinary(b);
    printf("a & b = %d\n", a & b);   // 结果：1 (0001)
    printbinary(a & b);
    printf("a | b = %d\n", a | b);   // 结果：7 (0111)
    printbinary(a | b);
    printf("a ^ b = %d\n", a ^ b);   // 结果：6 (0110)
    printbinary(a ^ b);
    printf("~a = %d\n", ~a);         // 结果：-6 (二进制补码)
    printbinary(~a);
    printf("a << 1 = %d\n", a << 1); // 结果：10 (二进制 1010)
    printbinary(a << 1);
    printf("a >> 1 = %d\n", a >> 1); // 结果：2 (二进制 0010)
    printbinary(a >> 1);
}
#endif
