#include <iostream>

int main(){

int x = 3.14;

double y = (int) 6.93;// explicit type conversion (int to float)

char z = 65; // implicit

std::cout << x << '\n'; // Implicit type conversion (float to int)

std::cout << y << '\n';

std::cout << z << '\n';

std::cout << (char) 97 << '\n'; //explicit

//we can use type converion in int division

int a = 7;
int b = 13;
double score = (double)a/b * 100; // expicit

std::cout << score << "%" << '\n';

return 0;
}