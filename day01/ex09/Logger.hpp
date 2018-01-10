#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <fstream>
#include <ctime>

class Logger {
	private:
		std::string makeLogEntry(std::string str);
		void logToConsole(std::string str);
		void logToFile(std::string str);
	public:
		Logger ();
		~Logger ();
		void log(std::string const & dest, std::string const & message);
};

#endif
