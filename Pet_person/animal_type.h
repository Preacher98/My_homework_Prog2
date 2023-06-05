#include<iostream>
#include<string>

enum Animal_type {DOG,CAT,SCARATOPORAGNO};

std::string getanimaltype(Animal_type s){

    switch (s)
    {
    case 0:
        return "DOG";
        break;
    case 1:
        return "CAT";
        break;
    case 2:
        return "SCARATOPORAGNO";
        break;
    default:
        break;
    };


}
