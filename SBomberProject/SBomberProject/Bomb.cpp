
#include <iostream>
#include <vector>

#include "Bomb.h"
#include "MyTools.h"

using namespace std;
using namespace MyTools;

void Bomb::Draw() const
{
    MyTools::SetColor(CC_LightMagenta);
    GotoXY(x, y);
    cout << "*";
}

DestroyableGroundObject* Bomb::CheckDestoyableObjects()
{
    
    const double size = this->GetWidth();
    const double size_2 = size / 2;
    for (size_t i = 0; i < _vecDestoyableObjects.size(); i++)
    {
        const double x1 = this->GetX() - size_2;
        const double x2 = x1 + size;
        if (_vecDestoyableObjects[i]->HandleInsideCheck(x1, x2))
        {
            return _vecDestoyableObjects[i];
            break;
          
        }
    }
    return nullptr;
}




