#pragma once

#include "DynamicObject.h"

class Bomb : public DynamicObject
{
public:

	Bomb(Bomb* pbomb) 
	{
		diff = pbomb->diff;
	}
	
	static const uint16_t BombCost = 10; // стоимость бомбы в очках

	void Draw() const override;

	Bomb* Clone() const;

private:

	int diff = 0;



};

