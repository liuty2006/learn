#include <stdio.h>

// 定义一个结构体表示点
struct Point {
    int x;
    int y;
};

// 函数操作结构体中的数据
void movePoint(struct Point *p, int dx, int dy) {
    p->x += dx;
    p->y += dy;
}

int main() {
    struct Point p = {0, 0};  // 初始化结构体
    printf("Initial Position: (%d, %d)\n", p.x, p.y);

    // 移动点
    movePoint(&p, 5, 10);
    printf("New Position: (%d, %d)\n", p.x, p.y);

    return 0;
}

