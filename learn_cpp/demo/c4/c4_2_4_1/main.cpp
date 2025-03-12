#include <stdio.h>
#include <string.h>

void printMessage(const char *msg) { // 按值传递（指针不可修改内容）
    printf("message: %s\n", msg);
}

void modifyMessage(char *msg, size_t size) { // 按引用传递（修改字符串）
    strncat(msg, " Have a great day!", size - strlen(msg) - 1);
}

int main() {
    char text[50] = "Hello, C!"; // 预留足够的空间来修改字符串
    printMessage(text);

    // 修改
    modifyMessage(text, sizeof(text));
    printf("modify string: %s\n", text);

    return 0;
}
