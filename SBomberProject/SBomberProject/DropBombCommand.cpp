#include "DropBombCommand.h"
#include "FileLoggerSingletone.h"

void DropBombCommand::Execute()
{
    if (_bombsNumber > 0)
    {
        FileLoggerSingletone::getInstance().WriteToLog(std::string(__FUNCTION__) + " was invoked");

       
        double x = _pPlane->GetX() + 4;
        double y = _pPlane->GetY() + 2;

        Bomb* pBomb = new Bomb;
        pBomb->SetDirection(0.3, 1);
        pBomb->SetSpeed(2);
        pBomb->SetPos(x, y);
        pBomb->SetWidth(SMALL_CRATER_SIZE);

        _vecDynamicObj.push_back(pBomb);
        _bombsNumber--;
        _score -= Bomb::BombCost;
    }
}
