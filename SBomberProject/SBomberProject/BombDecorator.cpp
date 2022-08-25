#include "BombDecorator.h"
#include "Bomb.h"
#include "ScreenSingleton.h"
#include <iostream>

void BombDecorator::Draw() const
{
	bomb->Draw();
	// Некоторое изменение внешнего вида бомбы
	ScreenSingleton::getInstance().GotoXY(bomb->GetX(), bomb->GetY() - 1);
	
	std::cout << "|";
}

void BombDecorator::Move(uint16_t time)
{
	bomb->Move(time * 1.6);
}

void BombDecorator::SetPos(double nx, double ny) { bomb->SetPos(nx, ny); }
uint16_t BombDecorator::GetWidth() { return bomb->GetWidth(); }