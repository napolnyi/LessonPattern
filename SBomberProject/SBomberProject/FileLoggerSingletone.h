#pragma once

#include <string>


class FileLoggerSingletone
{
public:
	static FileLoggerSingletone& getInstance() {
		static FileLoggerSingletone theInstance;
		return theInstance;
	}
	void __fastcall OpenLogFile(const std::string& FN);

	void CloseLogFile();

	void __fastcall WriteToLog(const std::string& str, int counter);

	void __fastcall WriteToLog(const std::string& str, int n, int counter);

	void __fastcall WriteToLog(const std::string& str, double d, int counter);



private:
	FileLoggerSingletone() {}
	FileLoggerSingletone(const FileLoggerSingletone& root) = delete;
	FileLoggerSingletone operator = (const FileLoggerSingletone&) = delete;
};

