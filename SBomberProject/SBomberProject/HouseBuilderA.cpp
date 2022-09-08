#include "HouseBuilderA.h"



void HouseBuilderA::createWallLeft()
{
	for (size_t i = 4; i < 10; i++)
	{
		house->look[i][0] = '#';
	}
}

void HouseBuilderA::createWallUp()
{
	for (size_t i = 0; i < 10; i++)
	{
		house->look[4][i] = '#';
	}
}

void HouseBuilderA::createWallDown()
{
	for (size_t i = 0; i < 10; i++)
	{
		house->look[9][i] = '#';
	}
}

void HouseBuilderA::createWallRight()
{
	for (size_t i = 4; i < 10; i++)
	{
		house->look[i][9] = '#';
	}
}

void HouseBuilderA::createRoofLeft()
{

	for (size_t j = 0; j < 4; j++)
	{
		house->look[3-j][j] = '#';

	}

}

void HouseBuilderA::createRoofRight()
{
	
	for (size_t j = 0; j < 4; j++)
	{
		house->look[3-j][9-j] = '#';

	}

}
void HouseBuilderA::createChimney()
{
	for (size_t i = 0; i < 2; i++)
	{
		house->look[0][i + 7] = '#';
		house->look[1][i + 7] = '#';
	}
}

void HouseBuilderA::createWindow()
{
	for (size_t i = 0; i < 4; i++)
	{
		house->look[5][i + 3] = '#';
		house->look[8][i + 3] = '#';
	}
	for (size_t i = 0; i < 2; i++)
	{
		house->look[6+i][3] = '#';
		house->look[6+i][6] = '#';
	}
	
}

void HouseBuilderA::setColor(MyTools::ConsoleColor color)
{
	house->color = color;
}
