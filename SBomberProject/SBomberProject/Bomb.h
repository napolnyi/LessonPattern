#pragma once

#include "DynamicObject.h"
#include "DestroyableGroundObject.h"
#include <vector>

using namespace std;

class Bomb : public DynamicObject
{
public:

	static const uint16_t BombCost = 10; // стоимость бомбы в очках

	void Draw() const override;

	DestroyableGroundObject* CheckDestoyableObjects();

	void AddObserver(vector<DestroyableGroundObject*>& vecDestoyableObjects) 
	{
		_vecDestoyableObjects = vecDestoyableObjects;
	}

private:

	vector<DestroyableGroundObject*> _vecDestoyableObjects;
};

