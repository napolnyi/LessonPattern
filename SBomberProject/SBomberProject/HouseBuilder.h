#pragma once
#include "House.h"
#include "MyTools.h"

class HouseBuilder
{
protected:
	House* house;
public:
	HouseBuilder(House* _house) : house(_house) {}
	virtual ~HouseBuilder() {}
	virtual void createWallLeft() {}
	virtual void createWallUp() {}
	virtual void createWallDown() {}
	virtual void createWallRight() {}
	virtual void createRoofLeft() {}
	virtual void createRoofRight() {}
	virtual void createChimney() {}
	virtual void createWindow() {}
	virtual void setColor(MyTools::ConsoleColor color) {}
	virtual House* getHouse() { return house; }
};

