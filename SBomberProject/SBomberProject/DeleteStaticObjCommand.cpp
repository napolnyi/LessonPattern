#include "DeleteStaticObjCommand.h"

void DeleteStaticObjCommand::Execute()
{
    auto it = _vecStaticObj.begin();
    for (; it != _vecStaticObj.end(); it++)
    {
        if (*it == _pObj)
        {
            _vecStaticObj.erase(it);
            break;
        }
    }
}
