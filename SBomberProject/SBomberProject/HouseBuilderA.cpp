#include "HouseBuilderA.h"
#include "House.h"


void HouseBuilderA::createWallLeft()
{
	for (size_t i = 9; i > 3; i--)
	{
		house->look[0][i] = '*';
	}
}

void HouseBuilderA::createWallUp()
{
	for (size_t i = 9; i >= 0; i--)
	{
		house->look[i][4] = '*';
	}
}

void HouseBuilderA::createWallDown()
{
	for (size_t i = 9; i >= 0; i--)
	{
		house->look[i][9] = '*';
	}
}

void HouseBuilderA::createWallRight()
{
	for (size_t i = 9; i > 3; i--)
	{
		house->look[9][i] = '*';
	}
}

void HouseBuilderA::createRoofLeft()
{
	for (size_t i = 3; i <= 0; i--)
	{
		for (size_t j = 1; j < 5; j++)
		{
			house->look[i][j] = '*';

		}

	}
}

void HouseBuilderA::createRoofRight()
{
	for (size_t i = 3; i <= 0; i--)
	{
		for (size_t j = 9; j > 4; j--)
		{
			house->look[i][j] = '*';

		}

	}
}
void HouseBuilderA::createChimney()
{
	for (size_t i = 0; i < 2; i++)
	{
		house->look[0][i + 7];
		house->look[1][i + 7];
	}
}

void HouseBuilderA::createWindow()
{
	for (size_t i = 0; i < 4; i++)
	{
		house->look[2][i + 3];
		house->look[5][i + 3];
		house->look[i + 2][3];
		house->look[i + 2][6];
	}
}

void HouseBuilderA::setColor(MyTools::ConsoleColor color)
{
	house->color = color;
}
