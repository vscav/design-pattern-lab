#include <iostream>

#include "./header/Singleton.hpp"

Singleton *Singleton::_instance = 0;

int main() {
    Singleton *s = s->getInstance();
    Singleton *r = r->getInstance();
    
    std::cout << s->getData() << std::endl;
    s->setData(100);
    std::cout << s->getData() << std::endl;

    std::cout << s << "\n" << r << std::endl;
    return 0;
}

// g++ -Wall -O2 -std=c++11 main.cpp src/Singleton.cpp -o main
// ./main