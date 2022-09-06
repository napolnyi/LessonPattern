#pragma once
#include "House.h"

class HouseBuilder
{
protected:
	House* house;
public:
	HouseBuilder() {}
	~HouseBuilder() {}
	virtual void createWallLeft() {}
	virtual void createWallUp() {}
	virtual void createWallDown() {}
	virtual void createWallRight() {}
	virtual void createRoof() {}
	virtual void createChimney() {}
	virtual void createWindow() {}
	virtual House* getHouse() { return house; }
};

