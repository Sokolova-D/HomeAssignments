/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number one.
*/

#include "hello.h"

#include <iostream>

void myproject::sayHello() {
    std::cout << "Hello, world!" << std::endl;
    while (true){
        std::string s;
        std::cin >> s;
        std::cout << "Hello, " << s << "!" << std::endl;
    }
}
