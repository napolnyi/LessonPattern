#pragma once

#include <stdint.h>

class TankAdaptee
{
public:
	TankAdaptee():x(0.0),y(0.0),width(0){}

	void Paint() const;
	bool __fastcall isInRange(double x1, double x2) const;

    void SetPos(double nx, double ny) { x = nx; y = ny; }

    double GetY() const { return y; }
    double GetX() const { return x; }

    void SetWidth(uint16_t widthN) { width = widthN; }
    uint16_t GetWidth() const { return width; }


protected:

    double x, y;
    uint16_t width;
    const uint16_t score = 30;
};

