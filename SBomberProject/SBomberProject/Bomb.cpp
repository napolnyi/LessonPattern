
#include <iostream>

#include "Bomb.h"
#include "ScreenSingleton.h"


using namespace std;


void Bomb::Draw() const
{
    ScreenSingleton::getInstance().SetColor(CC_LightMagenta);
    ScreenSingleton::getInstance().GotoXY(x, y);
    cout << "*";
}

void Bomb::Move(uint16_t time) 
{
    x += xDirction * speed * time * 0.001;
    y += yDirection * speed * time * 0.001;
}

