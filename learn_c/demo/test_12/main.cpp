#include <stdio.h>                           // 这是编译预处理指令

// ============ c12_1 ==================
#if 0
int main() {
    FILE *file = fopen("example.txt", "w");  // 以写入模式打开文件
    if (file == NULL) {
        printf("file open fail!\n");
        return 1;
    }
    fprintf(file, "Hello, file!\n");  // 写入内容到文件
    fclose(file);  // 关闭文件
    return 0;
}
#endif

// ============ c12_2 ==================
#if 0
int main() {
    FILE *file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("文件打开失败!\n");
        return 1;
    }

    char buffer[100];
    size_t bytesRead = fread(buffer, sizeof(char), sizeof(buffer) - 1, file);
    buffer[bytesRead] = '\0';  // 确保字符串终止 - 在 C 语言中，字符串是以 \0（空字符）作为结束标志的
    printf("read content: %s\n", buffer);
    fclose(file);  // 关闭文件
    return 0;
}
#endif

// ============ c12_3_1 ==================
#if 0
int main() {
    FILE *file = fopen("output.txt", "w");
    //FILE *file = fopen("output.txt", "a");  // append
    if (file == NULL) {
        printf("无法打开文件\n");
        return 1;
    }

    int num = 42;
    fprintf(file, "The number is: %d\n", num);

    fclose(file);
    return 0;
}
#endif

// ============ c12_3_2 ==================
#if 0
#include <string.h>
int main() {
    FILE *file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("文件打开失败!\n");
        return 1;
    }
    const char *text = "This is an example of writing to a file.";
    fwrite(text, sizeof(char), strlen(text), file);  // 写入数据到文件
    fclose(file);  // 关闭文件
    return 0;
}
#endif

// ============ c12_3_3 ==================

#if 0
#include <stdlib.h>

int main() {
    // 要写入的整数数组
    int arr[] = {1, 2, 3, 4, 5};
    size_t arrSize = sizeof(arr) / sizeof(arr[0]);  // 数组元素个数

    // 打开文件，写入二进制数据
    FILE *file = fopen("binary.dat", "wb");  // "wb"表示写入二进制文件
    if (file == NULL) {
        printf("can not open to write\n");
        return 1;
    }

    // 使用 fwrite 写入整数数组到文件
    size_t written = fwrite(arr, sizeof(int), arrSize, file);
    if (written != arrSize) {
        printf("write error\n");
        fclose(file);
        return 1;
    }

    fclose(file);  // 写入完成后关闭文件

    // 重新打开文件，读取二进制数据
    file = fopen("binary.dat", "rb");  // "rb"表示读取二进制文件
    if (file == NULL) {
        printf("can not open to read\n");
        return 1;
    }

    // 使用 malloc 动态分配内存来存储读取的数据
    int *readArr = (int *)malloc(arrSize * sizeof(int));
    if (readArr == NULL) {
        printf("memery alloc fail\n");
        fclose(file);
        return 1;
    }

    // 使用 fread 读取文件中的整数数组
    size_t readCount = fread(readArr, sizeof(int), arrSize, file);
    if (readCount != arrSize) {
        printf("read file fail\n");
        free(readArr);
        fclose(file);
        return 1;
    }

    // 输出读取到的数据
    printf("read content:\n");
    for (size_t i = 0; i < arrSize; i++) {
        printf("%d ", readArr[i]);
    }
    printf("\n");

    // 释放动态分配的内存，并关闭文件
    free(readArr);
    fclose(file);  // 读取完成后关闭文件

    return 0;
}
#endif

// ============ c12_4 ==================
#if 0
#include <string.h>
int main() {
    FILE *file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("file open fail!\n");
        return 1;
    }

    fseek(file, 5, SEEK_SET);  // 将文件指针移动到文件的第5个字节
    char buffer[20];
    fread(buffer, sizeof(char), 10, file);  // 读取10个字节
    buffer[10] = '\0';  // 字符串截止
    printf("read content: %s\n", buffer);

    //
    int size = sizeof(buffer);
    printf("buffer size: %d\n", size);

    //
    int str_size = strlen(buffer);
    printf("str_size: %d\n", str_size);

    long pos = ftell(file);  // 获取当前文件指针的位置
    printf("file point postion: %ld\n", pos);

    fclose(file);  // 关闭文件
    return 0;
}
#endif

// ============ c12_5 ==================
#if 0
int main() {
    FILE *file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("文件打开失败!\n");
        return 1;
    }
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);  // 打印文件内容
    }
    if (feof(file)) {
        printf("\nup to end of file.\n");
    }
    fclose(file);  // 关闭文件
    return 0;
}
#endif


