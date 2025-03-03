#include <iostream>
#include <iomanip>  // 引入头文件
using namespace std;

int main() {
    double pi = 3.14159265358979;

    cout << "Pi with 2 decimal places: " << fixed << setprecision(2) << pi << endl;
    cout << "Pi with 4 decimal places: " << fixed << setprecision(4) << pi << endl;

    return 0;
}
