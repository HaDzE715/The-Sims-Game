#pragma once

class Person;
class Social
{
    private:

    int level;

    public:
    Social(): level(5) {} // default parameter
    ~Social(){ this->level -= 1;}

    void Talk(Person p1);
    void Text(Person p1);
    void PhoneCall(Person p1);
    
    int getSocialLevel(){return this->level;}
};