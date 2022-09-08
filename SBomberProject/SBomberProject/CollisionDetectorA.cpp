#include "CollisionDetectorA.h"

bool CollisionDetectorA::CheckPlaneAndLevelGUI(Plane* plane, LevelGUI* level)
{
    if (plane->GetX() > level->GetFinishX())
    {
        return true;
    }
    else return  false;
}

bool CollisionDetectorA::CheckBombsAndGround(Bomb* pBomb, Ground* pGround)
{

    const double y = pGround->GetY();

    if (pBomb->GetY() >= y)
    {
        return true;
    }
    else return false;

}

bool CollisionDetectorA::CheckDestoyableObjects(Bomb* pBomb, DestroyableGroundObject* destroy)
{

    const double size = pBomb->GetWidth();
    const double size_2 = size / 2;
    const double x1 = pBomb->GetX() - size_2;
    const double x2 = x1 + size;
    if (destroy->isInside(x1, x2))
    {
        return true;
    }
    else return false;

}