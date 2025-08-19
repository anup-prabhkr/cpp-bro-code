#include <iostream>

int main(){
    std::string name;

    std::cout << "What's your name? ";
    std::cin >> name; // string without space
    std::cout << "Hello " << name;

    std::string f_name;

    std::cout << "\nWhat's your full name? ";
    std::getline(std::cin >> std::ws, f_name); // string with spacem, 'std::ws' this line eliminates any new line char and white space present in buffer
    std::cout << "Hello " << f_name;
}