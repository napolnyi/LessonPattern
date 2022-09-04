#include "TankAdapter.h"

void TankAdapter::SetPos(double nx, double ny)
{
	_tankAdaptee.SetPos(nx, ny);
}


double TankAdapter::GetY() const
{
	return _tankAdaptee.GetY();
}

double TankAdapter::GetX() const
{
	return _tankAdaptee.GetY();
}

void TankAdapter::SetWidth(uint16_t widthN)
{
	_tankAdaptee.SetWidth(widthN);
}

uint16_t TankAdapter::GetWidth() const
{
	return _tankAdaptee.GetWidth();
}

void TankAdapter::Draw() const
{
	_tankAdaptee.Paint();
}

bool __fastcall TankAdapter::isInside(double x1, double x2) const
{
	return _tankAdaptee.isInRange(x1,x2);
}


