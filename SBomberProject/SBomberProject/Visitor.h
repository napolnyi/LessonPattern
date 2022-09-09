#pragma once

class Bomb;
class Plane;

class Visitor
{


public:
	Visitor() {}
	~Visitor() {}
	virtual void _fastcall log(Bomb* pBomb) const  = 0;
	virtual void _fastcall log(Plane* pPlane) const = 0;
};

