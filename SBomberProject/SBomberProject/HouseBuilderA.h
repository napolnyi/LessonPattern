#pragma once
#include "HouseBuilder.h"
#include "House.h"
#include "MyTools.h"

class House;
class HouseBuilderA : 
	public HouseBuilder 
{
public:
	void createWallLeft();
	void createWallUp();
	void createWallDown();
	void createWallRight();
	void createRoofLeft();
	void createRoofRight();
	void createChimney();
	void createWindow();
	void setColor(MyTools::ConsoleColor color);
	
};

