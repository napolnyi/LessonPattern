
#include <iostream>

#include "Bomb.h"
#include "ScreenSingleton.h"

using namespace std;


void Bomb::Draw() const
{
    ScreenSingleton::getInstance().SetColor(CC_LightMagenta);
    GotoXY(x, y);
    cout << "*";
}