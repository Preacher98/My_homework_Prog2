#include "Shape.h"
#define pi  3.14
using namespace std;
class Circle: public Shape
{
private:
    double radius=1;
    double xc=0;
    double yc=0;
public:
    Circle(double r,double x,double y);
    //Circle(double r,double x,double y,double c, Color s);
    double getXc(){return xc;};
    double getYc(){return yc;};
    double getRadius(){return radius;};
    void setXc(double x){xc=x;};
    void setYc(double y){yc=y;};
    void setRadius(double r){radius=r;};
    double getCricumference(){return 2*radius*pi;};
    //bool isGoniometric();
    Circle& operator=(const Shape& fig)
    {
        const Circle* ptrCirc = dynamic_cast<const Circle *>(&fig);
        if (ptrCirc)
        {
            this->radius=ptrCirc->radius;
            this->xc=ptrCirc->xc;
            this->yc=ptrCirc->yc;
        }
        return *this;
    }
    void print()
    {
        cout<<"Cirlce parametres: \t";
        cout<<"xc= "<<this->xc<<" yc= "<<this->yc<<" radius= "<<this->radius<<" Area= "<<this->getArea()<<endl;
        
    }
    double getArea(){return(radius*radius)*pi;};
    ~Circle(){};
};

Circle::Circle(double r, double x, double y)
{
    radius=r;
    xc=x;
    yc=y;
}

