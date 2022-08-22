#pragma once

#include "FileLoggerSingletone.h"

class LoggerSingleton
{
public:
	static LoggerSingleton& getInstance() {
		static LoggerSingleton theInstance;
		return theInstance;
	}
	
		
	void __fastcall WriteToLog(const std::string& str);

	void __fastcall WriteToLog(const std::string& str, int n);

	void __fastcall WriteToLog(const std::string& str, double d);


private:
	LoggerSingleton() {}
	LoggerSingleton(const FileLoggerSingletone& root) = delete;
	LoggerSingleton operator = (const FileLoggerSingletone&) = delete;
	FileLoggerSingletone* _fileLoggerSingletone;
	
};

