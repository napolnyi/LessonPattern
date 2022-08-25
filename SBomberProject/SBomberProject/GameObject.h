#pragma once

class GameObject {
public:

    GameObject() : x(0.0), y(0.0), width(0) { }

    virtual void Draw() const = 0;

    //inline void SetPos(double nx, double ny) { x = nx; y = ny; }
    virtual void SetPos() const = 0;

   /* inline double GetY() const { return y; }
    inline double GetX() const { return x; }*/
    virtual double GetY() const = 0;
    virtual double GetX() const = 0;

    //inline void SetWidth(uint16_t widthN) { width = widthN; }
    virtual void SetWidth() const = 0;

    //inline uint16_t GetWidth() const { return width; }
    virtual uint16_t GetWidth() const = 0;

protected:

    double x, y;
    uint16_t width;
};