#ifndef SHAPE_H
#define SHAPE_H
#include "Color.h"
class Shape
{
private:
    Color c;
public:
    Shape(Color d){c=d;};;
    Shape(){};
    ~Shape(){};
    Color getColor(){return c;};
    void setColor(Color d){c=d;};
    virtual void print()=0;
    virtual double getArea()=0;
    virtual Shape& operator=(const Shape& other)=0;
};


#endif 