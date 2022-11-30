#pragma once
#include "Animal.h"

class Fun
{
    private:

    int level;

    public:
    Fun():level(5){}
    ~Fun(){this->level -= 1;}

    void Dance(){this->level += 5;}
    void PlayGuitar(){this->level += 5;}
    void PlayComputer(){this->level += 5;}
    void PetAnimal(Animal a1){this->level += 5;}

    int getFunLevel(){return level;}
};