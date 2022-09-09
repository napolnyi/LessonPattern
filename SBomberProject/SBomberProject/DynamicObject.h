#pragma once

#include <stdint.h>

#include "GameObject.h"

class Visitor;

class DynamicObject : public GameObject 
{
public:

    DynamicObject() : speed(0.0), xDirction(0.0), yDirection(0) { }

    inline void SetSpeed(double sp) { speed = sp; }
    inline void SetDirection(double dx, double dy) { xDirction = dx; yDirection = dy; }
    
    virtual void Move(uint16_t time) { x += xDirction * speed * time * 0.001; y += yDirection * speed * time * 0.001; };

    double GetSpeed() { return speed; }
    double GetDirectionX() { return xDirction; }
    double GetDirectionY() { return yDirection; }

    virtual void _fastcall Accept(const Visitor& v) = 0;


protected:

    double speed;
    double xDirction, yDirection;

};