#include <iostream>
#include <fstream>

void cat(std::string filename)
{
    std::ifstream in(filename);
    std::string     str;

    if (!in.is_open())
    {
        std::cout << "ft_cat: " << filename << ": No such file or directory" << std::endl;
    }
    while (std::getline(in, str))
    {
        std::cout << str << std::endl;
    }
    in.close();
}

int main(int argc, char const *argv[])
{
    std::string str;
    while (argc == 1)
    {
        std::getline(std::cin, str);
        if (std::cin.eof())
        {
            break;
        }
        std::cout << str << std::endl;
    }
    if (argc > 1)
    {
        for (int i = 1; i < argc; ++i)
        {
            if (argv[i][0] == '-')
            {
                while(!std::cin.eof())
                {
                    std::getline(std::cin, str);
                    std::cout << str << std::endl;
                }
            }
            else
            {
                cat(argv[i]);
            }
        }
    }
    return 0;
}
