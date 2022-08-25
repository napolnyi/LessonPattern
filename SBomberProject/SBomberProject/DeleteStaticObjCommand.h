#pragma once

#include "Command.h"

class DeleteStaticObjCommand :
    public Command
{
private:
    GameObject* _pObj;
    std::vector<GameObject*>& _vecStaticObj;
public:
    DeleteStaticObjCommand(GameObject* pObj, std::vector<GameObject*>& vecStaticObj) : 
        _pObj(pObj), _vecStaticObj(vecStaticObj) {}
    void Execute() override;
};

