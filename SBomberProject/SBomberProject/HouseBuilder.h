#pragma once

#include "House.h"
#include "MyTools.h"

class HouseBuilder
{
protected:
	House* house;
public:
	HouseBuilder() 
	{ house = new House;
		for (size_t i = 0; i < 10; i++)
		{
			for (size_t j = 0; j < 10; j++)
			{
				house->look[i][j] = { ' ' };
			}

		}
	}
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
	House* getHouse() { return house; }
};

