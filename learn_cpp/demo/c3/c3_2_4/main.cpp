#include <iostream>
using namespace std;
#include <bitset>

int main() {
    int a = 5;  // 二进制：00000101
    int b = 3;  // 二进制：00000011

    // a
    std::bitset<8> bina(a); // 8 位二进制表示
    std::cout << "a: " << a << "; binary: " << bina << std::endl;

    // b
    std::bitset<8> binb(b); // 8 位二进制表示
    std::cout << "b: " << b << "; binary: " << binb << std::endl;

    // 与
    int c_and = a & b;
    std::bitset<8> binc_and(c_and); // 8 位二进制表示
    std::cout << "c_and: " << c_and << "; binary: " << binc_and << std::endl;

    // 或
    int c_or = a | b;
    std::bitset<8> binc_or(c_or); // 8 位二进制表示
    std::cout << "c_or: " << c_or << "; binary: " << binc_or << std::endl;

    // 异或
    int c_xor = a ^ b;
    std::bitset<8> binc_xor(c_xor); // 8 位二进制表示
    std::cout << "c_xor: " << c_xor << "; binary: " << binc_xor << std::endl;

    // 左移
    int c_left = a << 1;
    std::bitset<8> binc_left(c_left); // 8 位二进制表示
    std::cout << "c_left: " << c_left << "; binary: " << binc_left << std::endl;

    // 右移
    int c_right = a >> 1;
    std::bitset<8> binc_right(c_right); // 8 位二进制表示
    std::cout << "c_right: " << c_right << "; binary: " << binc_right << std::endl;

    return 0;
}
