#pragma once

#include "CollisionDetector.h"



class CollisionDetectorA :
    public CollisionDetector
{
public:

    CollisionDetectorA() {}
    ~CollisionDetectorA() {}

    bool CheckPlaneAndLevelGUI(Plane* plane, LevelGUI* level) override;


    bool CheckBombsAndGround(Bomb* pBomb, Ground* pGround) override;


    bool CheckDestoyableObjects(Bomb* pBomb, DestroyableGroundObject* destroy) override;

};

