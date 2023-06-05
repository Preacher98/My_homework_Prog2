#include "Shape.h"
using namespace std;
class Triangle: public Shape
{
private:
    double base=1;
    double height=1;
public:
    Triangle(double b,double h);
    //Triangle(double b,double h, Color c);
    ~Triangle(){};
    double getBase(){return base;};
    double getHeight(){return height;};
    void setBase(double b){base=b;};
    void setHeight(double h){height=h;};
    Triangle& operator=(const Shape& fig)
    {
        const Triangle* ptrTria = dynamic_cast<const Triangle *>(&fig);
        if (ptrTria)
        {
            this->base=ptrTria->base;
            this->height=ptrTria->height;
        }
        return *this;
    }
    void print()
    {
        cout<<"Triangle parametres: \t";
        cout<<"Base= "<<this->base<<" Height= "<<this->height<<" Area= "<<this->getArea()<<endl;
    }
    double getArea(){return(base*height)/2;}

};

Triangle::Triangle(double b,double h)
{
    base=b;
    height=h;
}

