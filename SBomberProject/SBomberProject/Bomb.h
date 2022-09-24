#pragma once

#include "DynamicObject.h"


class Bomb : public DynamicObject
{
public:

	Bomb(const Bomb& pbomb) 
	{
		
		SetDirection(0.3, 1);
		speed = pbomb.speed;
		SetPos(pbomb.GetX()+5, pbomb.GetY());
		width = pbomb.width;
		
	}

	Bomb() {}
	
	static const uint16_t BombCost = 10; // стоимость бомбы в очках

	void Draw() const override;

	Bomb* Clone() const;

private:

	const int diff = 5;



};

