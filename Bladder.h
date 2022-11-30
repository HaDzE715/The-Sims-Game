#pragma once

class Bladder
{
    private:

    int level;

    public:

    Bladder():level(5){}
    ~Bladder(){this->level -= 1;}

    void UseToilet(){this->level += 5;}
    
    int getBladderLevel(){return this->level;}

};