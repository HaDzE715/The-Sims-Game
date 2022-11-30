#pragma once

#include "Food.h"

class Hunger
{
    private:

    int level;

    public:
    Hunger():level(5){}
    ~Hunger(){this->level -= 1;}

    void Eat(Food f1)
    {
        this->level += 3;
    }
    int GetFoodWorth(Food f1)
    {
        return f1.getFoodWorth();
    }
    int getHungerLevel(){return this->level;}

};