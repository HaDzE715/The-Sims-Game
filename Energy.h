#pragma once

class Energy
{
    private:

    int level;

    public:
    Energy():level(5){}
    ~Energy(){this->level -= 1;}

    void Sleep(){this->level += 5;}

    int getEnergyLevel(){return this->level;}
};