#pragma once

class Food
{
    private:

    char* name;
    int worth;

    public:
    Food(){}
    Food(const char *Fname, int NWorth);
    ~Food(){}
    
    bool HaveToBeCooked();

    int getFoodWorth(){return this->worth;}
    char *getFoodName(){return this->name;}
};