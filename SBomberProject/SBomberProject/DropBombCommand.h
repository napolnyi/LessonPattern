#pragma once


#include "Command.h"
#include "SBomber.h"


class DropBombCommand :
    public Command
{
private:

    Plane* _pPlane;
    std::vector<DynamicObject*>& _vecDynamicObj;
    uint16_t & _bombsNumber;
    int16_t& _score;

public:
    DropBombCommand(Plane* const pPlane, std::vector<DynamicObject*>& vecDynamicObj, uint16_t& const bombsNumber, int16_t& const score):
        _pPlane(pPlane), _vecDynamicObj(vecDynamicObj), _bombsNumber(bombsNumber), _score(score) {}
    void Execute() override;
};

