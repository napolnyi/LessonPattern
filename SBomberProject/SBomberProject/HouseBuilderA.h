#pragma once
#include "HouseBuilder.h"
#include "House.h"


class House;
class HouseBuilderA : 
	public HouseBuilder 
{
public:
	void createWallLeft() override;
	void createWallUp() override;
	void createWallDown() override;
	void createWallRight() override;
	void createRoof() override;
	
	
};

