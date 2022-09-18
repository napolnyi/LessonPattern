#pragma once
#include "Plane.h"
class BigPlane :
    public Plane
{
public:
    void DrawBody() const;
    void DrawWings() const;
    void DrawTail() const;
};

