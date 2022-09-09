
#include <iostream>

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

void _fastcall Bomb::Accept(const Visitor& v)
{
    v.log(this);
}
