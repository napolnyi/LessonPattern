#include "BombDecorator.h"
#include "Bomb.h"
#include "ScreenSingleton.h"
#include <iostream>

void BombDecorator::Draw() const
{
	_bomb->Draw();
	// Некоторое изменение внешнего вида бомбы
	ScreenSingleton::getInstance().GotoXY(_bomb->GetX(), _bomb->GetY() - 1);
	 
	std::cout << "|";
}

void BombDecorator::Move(uint16_t time)
{
	_bomb->Move(time * 1.6);
}

