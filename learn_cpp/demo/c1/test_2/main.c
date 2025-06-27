//#include <windows.h>
#include <stdio.h>

void put_clothes() {
    printf("放衣服\n");
}

void add_detergent() {
    printf("放洗衣液\n");
}

void add_water() {
    printf("注水\n");
}

void start_washing() {
    printf("启动洗衣\n");
}

void wash() {
    printf("洗\n");
}

void end_washing() {
    printf("结束洗衣\n");
}

void take_clothes() {
    printf("取衣服\n");
}

int main() {
    //SetConsoleOutputCP(65001); // 设置控制台输出编码为 UTF-8
    // 按照洗衣的步骤进行操作
    put_clothes();
    add_detergent();
    add_water();
    start_washing();
    wash();
    end_washing();
    take_clothes();

    return 0;
}
