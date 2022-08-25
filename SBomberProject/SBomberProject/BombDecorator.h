#pragma once
#include "DynamicObject.h"

class BombDecorator :
    public DynamicObject
{
public:
    void Draw() const override;
    void Move(uint16_t time);
    
    inline void SetPos(double nx, double ny);
    
    inline double GetY() const { return y; }
    inline double GetX() const { return x; }
 
    inline void SetWidth(uint16_t widthN) { width = widthN; }
   
    inline uint16_t GetWidth();

private:
    Bomb* bomb;
 
};

