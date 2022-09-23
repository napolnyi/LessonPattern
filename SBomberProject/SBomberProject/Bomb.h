#pragma once

#include "DynamicObject.h"

class Bomb : public DynamicObject
{
public:

	Bomb(const Bomb& pbomb) 
	{
		x = pbomb.x+diff;
	}

	Bomb() {}
	
	static const uint16_t BombCost = 10; // стоимость бомбы в очках

	void Draw() const override;

	Bomb* Clone() const;

private:

	const int diff = 5;



};

