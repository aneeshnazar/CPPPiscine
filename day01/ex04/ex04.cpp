#include <iostream>

int main(void)
{
    std::string str = std::string("HI THIS IS BRAIN");
    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << *ptr << std::endl;
    std::cout << ref << std::endl;
    return 0;
}
