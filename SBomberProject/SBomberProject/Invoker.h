#pragma once

#include"SBomber.h"
#include "Command.h"

class Invoker
{
private:
	Command* _command;

public:

	Invoker(Command* command) : _command(command) {}
	void DeleteDynamicObj();
	void DeleteStaticObj();
	void DropBomb();
};

