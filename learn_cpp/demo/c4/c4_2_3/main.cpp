#include <iostream>
using namespace std;

// 定义结构体
struct Student {
    string name;
    int age;
    double grade;
};

// 按值传递结构体（不会修改原始数据）
void printStudent(Student s) {
#if 0
    s.age += 1;  // 修改年龄
    s.grade += 5; // 提高成绩
#endif
    cout << "name: " << s.name << ", age: " << s.age << ", grade: " << s.grade << endl;
}

// 按引用传递结构体（不会复制，节省内存）
void modifyStudent(Student& s) {
    s.age += 1;  // 修改年龄
    s.grade += 5; // 提高成绩
}

int main() {
    Student stu = {"Alice", 20, 95.5};
    printStudent(stu);

    // 修改
    modifyStudent(stu);
    cout << "modified - name: " << stu.name << ", age: " << stu.age << ", grade: " << stu.grade << endl;

    return 0;
}
