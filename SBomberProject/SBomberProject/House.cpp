
#include <iostream>


#include "MyTools.h"
#include "House.h"

using namespace std;
using namespace MyTools;


//void House::Draw() const
//{
//	MyTools::SetColor(CC_Yellow);
//	GotoXY(x, y - 5);
//	cout << "  ########  ";
//	GotoXY(x, y - 4);
//	cout << "##        ##";
//	GotoXY(x, y - 3);
//	cout << "############";
//	GotoXY(x, y - 2);
//	cout << "#          #";
//	GotoXY(x, y - 1);
//	cout << "#          #";
//	GotoXY(x, y);
//	cout << "############";
//}



bool __fastcall House::isInside(double x1, double x2) const

{
	const double XBeg = x + 2;
	const double XEnd = x + width - 1;

	if (x1 < XBeg && x2 > XEnd)
	{
		return true;
	}

	if (x1 > XBeg && x1 < XEnd)
	{
		return true;
	}

	if (x2 > XBeg && x2 < XEnd)
	{
		return true;
	}

	return false;
}

void House::Draw() const
{
	
	GotoXY(x, y - 9);
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			cout << look[i][j];
		}
		GotoXY(x, y - 8 + i);
	}
}
