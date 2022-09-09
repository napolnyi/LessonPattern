#include "LogVisitor.h"
#include "MyTools.h"
#include "Bomb.h"
#include "Plane.h"

using namespace MyTools;

void _fastcall LogVisitor::log(Bomb* pBomb) const 
{
	WriteToLog("Speed Bomb:", pBomb->GetSpeed());
	WriteToLog("xDirction Bomb:", pBomb->GetDirectionX());
	WriteToLog("yDirction Bomb:", pBomb->GetDirectionY());

}

void _fastcall LogVisitor::log(Plane* pPlane) const
{
	WriteToLog("Speed Plane:", pPlane->GetSpeed());
	WriteToLog("xDirction Plane:", pPlane->GetDirectionX());
	WriteToLog("yDirction Plane:", pPlane->GetDirectionY());

}