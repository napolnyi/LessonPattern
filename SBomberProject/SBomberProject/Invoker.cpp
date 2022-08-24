#include "Invoker.h"
#include "DeleteDynamicObjCommand.h"


void Invoker::DeleteDynamicObj() {

	_command->Execute();
}
void Invoker::DeleteStaticObj() {

	_command->Execute();
}