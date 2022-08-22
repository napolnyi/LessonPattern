#include "LoggerSingleton.h"
#include <iostream>

static int counter = 0;


void __fastcall LoggerSingleton::WriteToLog(const std::string& str)
{
	
	_fileLoggerSingletone->WriteToLog(str,counter);
	counter++;
}

void __fastcall LoggerSingleton::WriteToLog(const std::string& str, int n)
{
	
	_fileLoggerSingletone->WriteToLog(str,n, counter);
	counter++;
}

void __fastcall LoggerSingleton::WriteToLog(const std::string& str, double d)
{
	
	_fileLoggerSingletone->WriteToLog(str,d, counter);
	counter++;
}

