#include "FileLoggerSingletone.h"
#include <string>
#include <iostream>
#include <fstream>
#include <chrono>



std::ofstream logOut;

void __fastcall FileLoggerSingletone::OpenLogFile(const std::string& FN)
{
	logOut.open(FN, std::ios_base::out);
}

void FileLoggerSingletone::CloseLogFile()
{
    if (logOut.is_open())
    {
        logOut.close();
    }
}

std::string GetCurDateTime()
{
    auto cur = std::chrono::system_clock::now();
    time_t time = std::chrono::system_clock::to_time_t(cur);
    char buf[64] = { 0 };
    ctime_s(buf, 64, &time);
    buf[strlen(buf) - 1] = '\0';
    return std::string(buf);
}

void __fastcall FileLoggerSingletone::WriteToLog(const std::string& str, int counter)
{
    if (logOut.is_open())
    {
        logOut << counter << "." << GetCurDateTime() << " - " << str << std::endl;
    }
}

void __fastcall FileLoggerSingletone::WriteToLog(const std::string& str, int n, int counter)
{
    if (logOut.is_open())
    {
        logOut << counter << "." << GetCurDateTime() << " - " << str << n << std::endl;
    }
}

void __fastcall FileLoggerSingletone::WriteToLog(const std::string& str, double d, int counter)
{
    if (logOut.is_open())
    {
        logOut << counter << "." << GetCurDateTime() << " - " << str << d << std::endl;
    }
}


