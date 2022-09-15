#pragma once

#include <stdint.h>
#include <string>

#include "DestroyableGroundObject.h"

using namespace std;

class Tank : public DestroyableGroundObject
{
public:

	
	Tank(Mediator* pmed) : pMediator(pmed) {}

	bool __fastcall isInside(double x1, double x2) const override;

	inline uint16_t GetScore() const override { return score; }

	void Draw() const override;
	
	Mediator* pMediator;

private:

	const uint16_t score = 30;
	
};

