#pragma once
#include "Plane.h"
#include "LevelGUI.h"
#include "Bomb.h"
#include "Ground.h"
#include "DestroyableGroundObject.h"



class CollisionDetector
{
public:

    CollisionDetector() {}
    virtual ~CollisionDetector(){}

    virtual bool CheckPlaneAndLevelGUI(Plane* plane, LevelGUI* level) = 0;
    

    virtual bool CheckBombsAndGround(Bomb* pBomb, Ground* pGround) = 0;


    virtual bool CheckDestoyableObjects(Bomb* pBomb, DestroyableGroundObject* destroy) = 0;


};

