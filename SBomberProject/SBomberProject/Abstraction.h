#pragma once
#include "CollisionDetector.h"

class Abstraction
{
protected:
	CollisionDetector* _collision;

public:
	Abstraction(CollisionDetector* collision) : _collision(collision) {}
	~Abstraction() {}

	bool findCollision() {_collision->CheckBombsAndGround(Bomb* pBomb, Ground* pGround);}

};

