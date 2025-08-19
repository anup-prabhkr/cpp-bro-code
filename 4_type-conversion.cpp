#include <iostream>

int main(){

int x = 3.14;
double y = (int) 6.93;// explicit type conversion (int to float)


std::cout << x << '\n'; // Implicit type conversion (float to int)

std::cout << y << '\n';

return 0;
}