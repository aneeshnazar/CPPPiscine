#include "Logger.hpp"

Logger::Logger (){}

Logger::~Logger (){}

std::string Logger::makeLogEntry(std::string str)
{
    time_t  rawtime;
    struct tm   *tm;
    std::string month[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    std::string day[31] = {"01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12", "13", "14", "15",
                            "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31"};

    time(&rawtime);
    tm = localtime(&rawtime);
    return ( "[" + month[tm->tm_mon] + " " + day[tm->tm_mday - 1] + " " + std::to_string(tm->tm_year + 1900) + "] " + str);
}

void Logger::logToConsole(std::string str)
{
    std::cout << makeLogEntry(str) << std::endl;
}

void Logger::logToFile(std::string str)
{
    std::ofstream file("Logger");

    file << makeLogEntry(str) << std::endl;
    file.close();
}

void Logger::log(std::string const & dest, std::string const & message)
{
    std::string actions[2] = {"Console", "File"};
    void (Logger::*dispatch_table[])(std::string const) =
    {
        &Logger::logToConsole,
        &Logger::logToFile
    };

    for (size_t i = 0; i < 2; i++)
    {
        if (dest == actions[i])
        {
            (this->*dispatch_table[i])(message);
            return ;
        }
    }
    std::cout << "Invalid destination" << std::endl;
}
