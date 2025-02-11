#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定义学生结构体
struct Student {
    char name[50];
    int age;
    double scores[3]; // 三门课程成绩
    double averageScore; // 平均成绩
};

// 计算学生的平均分
void calculateAverage(struct Student* student) {
    student->averageScore = (student->scores[0] + student->scores[1] + student->scores[2]) / 3.0;
}

// 输入学生信息
void inputStudentInfo(struct Student* student) {
    printf("Enter name: ");
    scanf("%s", student->name);
    printf("Enter age: ");
    scanf("%d", &student->age);
    printf("Enter scores for 3 subjects: ");
    for (int i = 0; i < 3; i++) {
        scanf("%lf", &student->scores[i]);
    }
    calculateAverage(student);
}

// 显示学生信息
void displayStudentInfo(struct Student* student) {
    printf("Name: %s, Age: %d, Scores: [%.2f, %.2f, %.2f], Average: %.2f\n",
           student->name, student->age, student->scores[0], student->scores[1], student->scores[2], student->averageScore);
}

// 保存学生信息到文件
void saveToFile(struct Student* students, int numStudents, const char* filename) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("Failed to open file!\n");
        return;
    }

    for (int i = 0; i < numStudents; i++) {
        fprintf(file, "%s %d %.2f %.2f %.2f %.2f\n",
                students[i].name, students[i].age,
                students[i].scores[0], students[i].scores[1], students[i].scores[2],
                students[i].averageScore);
    }

    fclose(file);
    printf("Student data saved to %s\n", filename);
}

int main() {
    int numStudents;

    // 输入学生数量
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // 动态分配内存
    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return -1;
    }

    // 输入学生信息
    for (int i = 0; i < numStudents; i++) {
        printf("Enter information for student %d:\n", i + 1);
        inputStudentInfo(&students[i]);
    }

    // 显示所有学生信息
    printf("\nAll student information:\n");
    for (int i = 0; i < numStudents; i++) {
        displayStudentInfo(&students[i]);
    }

    // 保存到文件
    saveToFile(students, numStudents, "students.txt");

    // 释放动态分配的内存
    free(students);

    return 0;
}
