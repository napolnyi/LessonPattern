#include "FileLogger.h"

#include <string>
#include <iostream>
#include <fstream>
#include <chrono>

using namespace std;

ofstream logOut;


void __fastcall FileLogger::OpenLogFile(const string& FN)
{
    logOut.open(FN, ios_base::out);
}

void FileLogger::CloseLogFile()
{
    if (logOut.is_open())
    {
        logOut.close();
    }
}

string GetCurDateTime()
{
    auto cur = std::chrono::system_clock::now();
    time_t time = std::chrono::system_clock::to_time_t(cur);
    char buf[64] = { 0 };
    ctime_s(buf, 64, &time);
    buf[strlen(buf) - 1] = '\0';
    return string(buf);
}

void __fastcall FileLogger::WriteToLog(const string& str)
{
    if (logOut.is_open())
    {
        logOut << GetCurDateTime() << " - " << str << endl;
    }
}

void __fastcall FileLogger::WriteToLog(const string& str, int n)
{
    if (logOut.is_open())
    {
        logOut << GetCurDateTime() << " - " << str << n << endl;
    }
}

void __fastcall FileLogger::WriteToLog(const string& str, double d)
{
    if (logOut.is_open())
    {
        logOut << GetCurDateTime() << " - " << str << d << endl;
    }
}