#include "Invoker.h"



void Invoker::DeleteDynamicObj() {

	_command->Execute();
}

void Invoker::DeleteStaticObj() {

	_command->Execute();
}

void Invoker::DropBomb() {

	_command->Execute();
}
