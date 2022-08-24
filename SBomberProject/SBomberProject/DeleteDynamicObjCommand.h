#pragma once
#include "Command.h"

class DeleteDynamicObjCommand :
    public Command
{
private:
    DynamicObject* _pObj;
    std::vector<DynamicObject*> _vecDynamicObj;

public:
    
    DeleteDynamicObjCommand(DynamicObject* pObj, std::vector<DynamicObject*> vecDynamicObj) : 
        _pObj(pObj), _vecDynamicObj(vecDynamicObj){}
    void Execute() override;

};

