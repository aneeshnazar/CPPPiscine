#include <Road.class.hpp>

Road::Road()
{
    srand(time(NULL));
    char    str[32];
    std::string chars = " o  * .";
    for (size_t i = 0; i < 16; i++)
    {
        for (size_t j = 0; j < 32; ++j)
        {
            str[j] = chars[rand() % 8];
        }
        scenery[i] = std::string(str);
    }
}

Road::~Road(){}

Road::Road (Road const &cc)
{
    *this = cc;
}

Road &Road::operator=(Road const &input)
{
    for (size_t i = 0; i < 16; i++) {
        scenery[i] = input.scenery[i];
    }
    return (*this);
}

std::string *Road::getScenery()
{
    return (scenery);
}
