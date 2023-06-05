#ifndef FASCEETA_H
#define FASCEETA_H
class Fasceta
{
private:
   
public:
    
    ~Fasceta();
    enum fasce{
    F_0_3=0,
    F_3_6=1,
    F_6_9=2,
    F_9_12=3};
    fasce f;

    Fasceta(int h){
        switch (h)
        {
        case 0: f=static_cast<fasce>(h); break;
        case 1: f=static_cast<fasce>(h); break;
        case 2: f=static_cast<fasce>(h); break;
        case 3: f=static_cast<fasce>(h); break;
        default:
            break;
        }
        
    };
    Fasceta getfascia(){return f;};
};


Fasceta::~Fasceta()
{
}



#endif