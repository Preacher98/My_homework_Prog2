#include "Shape.h"
using namespace std;
class Rectangle: public Shape
{
private:
    double height=1;
    double width=1;

public:
    Rectangle(){};
    Rectangle(double, double);
    ~Rectangle(){};
    double getHeight(){return height;};
    double getWidth(){return width;};
    void setHeight(double h){height=h;};
    void setWidth(double w){width=w;};
    Rectangle& operator=(const Shape& fig)
    {  const Rectangle* ptrrect = dynamic_cast<const Rectangle*>(&fig);
    if (ptrrect)
    {
        this->height= ptrrect->height;
        this->width= ptrrect->width;

    }
    return *this;}
    void print()
    {
        cout<<"Rectangle parametres: \t";
        cout<<"Height= "<<this->height<<" Width= "<<this->width<<" Area= "<<this->getArea()<<endl;
        if (isAsquare()){cout<<"\nWoW ! This is a square ! Nice square man ! "<<endl;}
    }
    double getArea(){return height*width;};
    bool isAsquare(){if (height==width){return true;}else return false;};
};


Rectangle::Rectangle(double h,double w)
{
    height=h;
    width=w;
}

