/*  typedef = reserved keyword used to create an
                additional name (alias) for another data type.
                New identifier for an existin@ßb+
                Helps with readability and reduces typos */
#include <iostream>
#include <vector>

typedef std::string text_t; // instead of using the string keyword we can use text_t

typedef int num_t; // instead of int we can use num_t

// typedef is now replace with 'using'

using point_t = double;

int main(){

    text_t name = "Anup";
    num_t x = 8;
    point_t y = 62.69;
    
    std::cout << name << '\n';
    std::cout << x << '\n';
    std::cout << y << '\n';


    return 0;
}