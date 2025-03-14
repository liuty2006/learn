#include <iostream>
using namespace std;

// 定义结构体
struct Student {
    string name;
    int age;
    float grade;
};

// 打印学生信息及其地址
void printStudents(const Student students[], int size) {        // 使用 const 保护数据，避免误修改
    for (int i = 0; i < size; i++) {
        cout << "Student " << i + 1 << " (Address: " << &students[i] << "):" << endl;
        cout << "  Name: " << students[i].name << endl;
        cout << "  Age: " << students[i].age << endl;
        cout << "  Grade: " << students[i].grade << endl;
        cout << "-------------------------" << endl;
    }
}

int main() {
    Student students[3] = {
        {"Alice", 20, 88.5},
        {"Bob", 21, 92.3},
        {"Charlie", 19, 76.8}
    };

    // size : 48  - 0x30
    cout << "sizeof Student : "<< sizeof(Student) << endl;

    // 传递结构体数组到函数
    printStudents(students, 3);

    return 0;
}
