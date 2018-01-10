#include "Logger.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
    Logger  logger;
    if (argc == 2)
    {
        logger.log(argv[1], "Logger created");
    }
    return 0;
}
