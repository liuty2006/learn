#include <iostream>
using namespace std;

// 全局变量
int globalVar = 10;  // 全局变量

void demoFunction() {
    // 局部变量
    int localVar = 20;  // 局部变量

    // 静态变量
    static int staticVar = 0;  // 静态变量，只有第一次调用时初始化

    // 动态变量
    int* dynamicVar = new int(30);  // 动态变量，通过new分配

    // 输出变量的值
    cout << "Global Variable: " << globalVar << endl;
    cout << "Local Variable: " << localVar << endl;
    cout << "Static Variable (initially 0, incremented with each call): " << staticVar << endl;
    cout << "Dynamic Variable: " << *dynamicVar << endl;

    // 修改变量的值
    globalVar++;
    localVar++;
    staticVar++;  // 静态变量保持其值
    (*dynamicVar)++;
    delete dynamicVar;  // 释放动态变量的内存
}

int main() {
    // 调用函数两次，查看静态变量的变化
    cout << "First call to demoFunction:" << endl;
    demoFunction();

    cout << "\nSecond call to demoFunction:" << endl;
    demoFunction();

    // 修改全局变量
    globalVar = 100;

    cout << "\nGlobal variable after modification in main: " << globalVar << endl;

    return 0;
}
