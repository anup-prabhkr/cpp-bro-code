#include <iostream>
/*Namespace = provides a solution for preventing name conflict in large projects.
            Each entity needs a unique name.
            A namespace allows for identically named entities as long as the namespaces are different.*/

namespace first{
    int x =1;
}

namespace second{
    int x =2;
}

int main() {

    using namespace second;

    std::cout << x << std::endl;

    std::cout <<"namespace(1): " <<first::x <<std::endl;



    return 0;
}
