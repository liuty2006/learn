#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) : name(n), age(a) {}

    void showInfo() {
        cout << "name: " << name << ", age: " << age << endl;
    }
};

// 按引用传递（不会复制对象）
void modifyStudent(Student& s) {
    s.age += 1;  // 修改年龄
    cout << "modify - name: " << s.name << ", age: " << s.age << endl;
}

int main() {
    Student stu("Bob", 19);
    modifyStudent(stu); // 直接修改原对象
    cout << "final - name: " << stu.name << ", age: " << stu.age << endl;
    return 0;
}
