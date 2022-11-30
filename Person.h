#pragma once
#include "Needs.h"
#include "Job.h"
#include <string.h>
#include <iostream>

class Person
{
private:
    int ID;
    char *firstname;
    char *lastname;
    Needs needs;
    Job job;
    int money;
public:
    Person();
    Person(const char *Fname, const char *Lname, int ID, int money);
    ~Person(){}

    void setFirstName(const char *Fname){this->firstname = strdup(Fname);}
    void setLastName(const char *Lname){this->lastname = strdup(Lname);}
    void setID(int id){this->ID = id;}
    void setMoney(int x){this->money = x;}
    void Print();
    void UseToilet();
    void Eat(Food F1);
    void Sleep();
    void Dance();
    void PlayGuitar();
    void PlayCompter();
    void PetAnimal(Animal a1);
    void Talk(Person *p1);
    void Text(Person *p1);
    void PhoneCall(Person *p1);
    void DeletePer();
    void Shower();


    int getBladderLevel(){return this->needs.getBladderLevel();}
    int getID(){return this->ID;}
    int getMoney(){return this->money;}
    int getHungerLevel(){return this->needs.getHungerLevel();}
    int getEnergyLevel(){return this->needs.getEnergyLevel();}
    int getFunLevel(){return this->needs.getFunLevel();}
    int getSocialLevel(){return this->needs.getSocialLevel();}
    int getHygieneLevel(){return this->needs.getHygieneLevel();}
    

    char *getFName(){return this->firstname;}
    char *getLName(){return this->lastname;}
    
};
