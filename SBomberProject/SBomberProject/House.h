#pragma once

#include <stdint.h>

#include "DestroyableGroundObject.h"
#include "HouseBuilderA.h"
#include "MyTools.h"


class House : public DestroyableGroundObject
{
public:

	bool __fastcall isInside(double x1, double x2) const override;

	inline uint16_t GetScore() const override { return score; }

	void Draw() const override;

	friend class HouseBuilderA;
	
	

private:

	const uint16_t score = 40;
	char look[10][10];
	MyTools::ConsoleColor color = MyTools::CC_Yellow;


};

