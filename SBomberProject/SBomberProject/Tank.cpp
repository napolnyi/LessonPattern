
#include <iostream>
#include <string>

#include "Tank.h"
#include "MyTools.h"
#include "Mediator.h"

using namespace std;
using namespace MyTools;

bool Tank::isInside(double x1, double x2) const
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


void Tank::Draw() const
{
	MyTools::SetColor(CC_Brown);
	GotoXY(x, y - 3);
	cout << "    #####";
	GotoXY(x-2, y - 2);
	cout << "#######   #";
	GotoXY(x, y - 1);
	cout << "    #####";
	GotoXY(x,y);
	cout << " ###########";
	
	int rnd = rand() % 4;

	switch (rnd)
	{
	case 0:
	{
		pMediator->Notify("You'll miss!!!");
		break;
	}
	case 1: 
	{
		pMediator->Notify("you won't get there!!!");
		break;
	}
	case 2: 
	{
		pMediator->Notify("muff!!!");
		break;
	}
	case 3:
	{
		pMediator->Notify("miss!!!");
		break;
	}
	default:
		break;
	}
	
}



