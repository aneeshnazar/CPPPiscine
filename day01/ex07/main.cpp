#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char const *argv[])
{
    if (argc == 4)
    {
        std::ifstream in(argv[1]);
        std::ofstream out(std::string(argv[1]) + ".replace");
        std::string     tmp;
        size_t          index = 0;
        int             len = strlen(argv[2]);
        if (out.is_open() && in.is_open())
        {
            while (std::getline(in, tmp))
            {
                index = 0;
                while (index < strlen(tmp.c_str()))
                {
                    index = tmp.find(argv[2], index);
                    if (index != std::string::npos)
                    {
                        tmp.replace(index, len, argv[3]);
                    }
                    else
                    {
                        break;
                    }
                    index += len;
                }
                out << tmp << std::endl;
            }
        }
        in.close();
        out.close();
    }
    return 0;
}
