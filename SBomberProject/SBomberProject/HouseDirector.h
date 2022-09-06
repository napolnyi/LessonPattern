#pragma once

#include "House.h"

class HouseDirector
{
public:
	
	House* createHouseA(HouseBuilder& builder) 
	{
		builder.createWallLeft();
		builder.createWallRight();
		builder.createWallDown();
		builder.createWallUp();
		builder.createRoofLeft();
		builder.createRoofRight();
		return builder.getHouse();
	}

	House* createHouseB(HouseBuilder& builder)
	{
		builder.createWallLeft();
		builder.createWallRight();
		builder.createWallDown();
		builder.createWallUp();
		builder.createRoofLeft();
		builder.createRoofRight();
		builder.createWindow();
		builder.createChimney();
		builder.setColor(MyTools::CC_Green);
		return builder.getHouse();
	}
};

