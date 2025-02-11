#include <stdio.h>                           // 这是编译预处理指令

#if 1
#include <stdlib.h>
struct Student {
    char name[50];
    int age;
    float height;
};

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // 动态分配数组
    struct Student* students = (struct Student*)malloc(n * sizeof(struct Student));
    if (!students) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter student information (name age height):\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        //scanf("%49s %d %f", students[i].name, &students[i].age, &students[i].height);
        scanf("%s,%d,%f", students[i].name, &students[i].age, &students[i].height);
    }

    printf("Student information:\n");
    for (i = 0; i < n; i++) {
        printf("%s, %d, %.2f\n", students[i].name, students[i].age, students[i].height);
    }

    // 释放动态分配的内存
    free(students);
    return 0;
}
#endif
#if 0
struct Student {
    char name[50];
    int age;
    float height;
};
int main(){
    int n;
    int i=0;
    printf("Enter student information:");
    scanf("%d",&n);//A'scanf'is deprecated: This functionstruct
    Student number[2000];
    struct Student *p =number;
    for(i=0;i<n;i++){
        scanf("%s %d %f",p[i].name, &p[i].age, &p[i].height);
    }

    for(i=0;i<n;i++){
        printf("%s,%d,%.2f\n",p[i].name,p[i].age,p[i].height);
    }

    //printf("%s\n",number[i].name);
    return 0;
}
#endif

// ============ c10_1 ==================
#if 0
void function() {
    int a = 10; // 局部变量存储在栈上
    printf("%d\n", a);
}


int main() {
    function();
    return 0;
}
#endif

// ============ c10_2 ==================
#include <stdlib.h>
#if 0
void function()
{
    int *arr = (int *)malloc(5 * sizeof(int));  // 分配一个包含 5 个整数的内存块
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return;  // 如果内存分配失败，直接返回
    }

    // 向 arr 数组中放入数据
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;  // 例如，填充数据为 0, 10, 20, 30, 40
    }

    // 遍历 arr 数组并输出
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);  // 输出数组中的每个元素
    }

    // 访问超出范围的数组元素
    printf("Accessing out-of-bounds array element:\n");
    printf("arr[5] = %d\n", arr[5]);  // 这是超出范围的访问

    // 使用完后释放内存
    free(arr);
    printf("Memory has been freed.\n");
}

int main() {
    function();
    return 0;
}
#endif

// ============ c11_1 ==================
#if 0
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct Person person1 = {"Alice", 25, 5.6};

    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    return 0;
}
#endif


// ============ c11_2 ==================
#if 0
struct Person {
    char name[50];
    int age;
    float height;
};

void printPerson(struct Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Height: %.2f\n", p.height);
}

int main() {
    struct Person person1 = {"Alice", 25, 5.6};
    printPerson(person1);
    return 0;
}
#endif

// ============ c11_3 ==================
#if 0
struct Person {
    char name[50];
    int age;
    float height;
};

void printPerson(struct Person *p) {
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);
    printf("Height: %.2f\n", p->height);
}

int main() {
    struct Person person1 = {"Alice", 25, 5.6};
    printPerson(&person1);
    return 0;
}
#endif

// ============ c11_4 ==================
#if 0
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct Person people[3] = {
        {"Alice", 25, 5.6},
        {"Bob", 30, 5.8},
        {"Charlie", 22, 5.7}
    };

    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Age: %d, Height: %.2f\n", people[i].name, people[i].age, people[i].height);
    }

    return 0;
}
#endif

// ============ c11_5 ==================
#if 0
#include <stdlib.h>
#include <string.h>
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    //
    int num = 3;

    int size = sizeof(struct Person);
    printf("size of person : %d\n", size);

    // 动态分配内存
    struct Person* peoples = (struct Person*)malloc(num * sizeof(struct Person));
    if (peoples == NULL) {
        printf("Memory allocation failed!\n");
        return -1;
    }

#if 0
    strcpy(peoples[0].name, "Alice");
    peoples[0].age = 25;
    peoples[0].height = 5.6;
    strcpy(peoples[1].name, "Bob");
    peoples[1].age = 30;
    peoples[1].height = 5.8;
    strcpy(peoples[2].name, "Charlie");
    peoples[2].age = 22;
    peoples[2].height = 5.7;

    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Age: %d, Height: %.2f\n", peoples[i].name, peoples[i].age, peoples[i].height);
    }

    // 释放动态分配的内存
    free(peoples);
#else
    struct Person* peoplesOld = peoples;
    //
    strcpy(peoples->name, "Alice");
    peoples->age = 25;
    peoples->height = 5.6;

    //
    peoples++;
    strcpy(peoples->name, "Bob");
    peoples->age = 30;
    peoples->height = 5.8;

    //
    peoples++;
    strcpy(peoples->name, "Charlie");
    peoples->age = 22;
    peoples->height = 5.7;

    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Age: %d, Height: %.2f\n", peoplesOld[i].name, peoplesOld[i].age, peoplesOld[i].height);
    }

    // 释放动态分配的内存
    free(peoplesOld);
#endif
    return 0;
}
#endif
