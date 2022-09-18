#pragma once

#include "MyTools.h"

extern FileLogger* logger ;

class FileLogger
{
public:

	FileLogger() { MyTools::OpenLogFile("log.txt"); }
	~FileLogger() { MyTools::CloseLogFile(); }

};

