#include <iostream>

int main(){
    const double PI = 3.14159; // by using const u can't moidfy its value further it will give an error if you try to change it
    double radius = 10;
    double circumference = 2 * PI * radius;
    std::cout << "Circumference: " << circumference << "cm" << std::endl;
    return 0;
}