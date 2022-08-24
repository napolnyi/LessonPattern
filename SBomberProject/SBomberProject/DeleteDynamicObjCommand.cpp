#include "DeleteDynamicObjCommand.h"

void DeleteDynamicObjCommand::Execute()
{
    auto it = _vecDynamicObj.begin();
    for (; it != _vecDynamicObj.end(); it++)
    {
        if (*it == _pObj)
        {
            _vecDynamicObj.erase(it);
            break;
        }
    }
}
