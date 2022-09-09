#pragma once
#include "CollisionDetector.h"
//#include "Bomb.h"
//#include "Ground.h"


class Abstraction
{
protected:
	CollisionDetector* _collision;
	Bomb* _pBomb;
	Ground* _pGround;
	Plane* _plane;
	LevelGUI* _level;
	DestroyableGroundObject* _destroy;


public:
	Abstraction(Bomb* pBomb, Ground* pGround, CollisionDetector* collision) : 
		_pBomb(pBomb), _pGround(pGround), _collision(collision) {}

	Abstraction(Plane* plane, LevelGUI* level, CollisionDetector* collision) :
		_plane(plane), _level(level), _collision(collision) {}

	Abstraction(Bomb* pBomb, DestroyableGroundObject* destroy, CollisionDetector* collision) :
		_pBomb(pBomb), _destroy(destroy), _collision(collision) {}


	~Abstraction() {}

	bool findBombsAndGround() {return _collision->CheckBombsAndGround(_pBomb,_pGround);}

	bool findPlaneAndLevel() { return _collision->CheckPlaneAndLevelGUI(_plane, _level); }

	bool findDestoyableObjects() { return _collision->CheckDestoyableObjects(_pBomb, _destroy); }
	
};

