#pragma once
#include "DestroyableGroundObject.h"
#include "TankAdaptee.h"

class TankAdapter :
    public DestroyableGroundObject
{
public:
    void SetPos(double nx, double ny) override;

    double GetY() const override;
    double GetX() const override;

    void SetWidth(uint16_t widthN) override;
    uint16_t GetWidth() const override;

    void Draw() const;

    bool __fastcall isInside(double x1, double x2) const;

    uint16_t GetScore() const override { return score; };

private:
    mutable TankAdaptee _tankAdaptee;
    const uint16_t score = 40;
};

