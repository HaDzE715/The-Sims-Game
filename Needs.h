#pragma once
#include "Bladder.h"
#include "Hunger.h"
#include "Energy.h"
#include "Fun.h"
#include "Social.h"
#include "Hygiene.h"

class Person;

class Needs
{
    private:

    Bladder bladder;
    Hunger hunger;
    Energy energy;
    Fun fun;
    Social social;
    Hygiene hygiene;

    public:

    int getBladderLevel(){return bladder.getBladderLevel();}
    int getHungerLevel(){return hunger.getHungerLevel();}
    int getEnergyLevel(){return energy.getEnergyLevel();}
    int getFunLevel(){return fun.getFunLevel();}
    int getSocialLevel(){return social.getSocialLevel();}
    int getHygieneLevel(){return hygiene.getHygieneLevel();}

    void UseToilet(){bladder.UseToilet();}
    void Eat(Food F1){hunger.Eat(F1);}
    void Sleep(){energy.Sleep();}
    void Dance(){fun.Dance();}
    void PlayGuitar(){fun.PlayGuitar();}
    void PlayComputer(){fun.PlayComputer();}
    void PetAnimal(Animal a1){fun.PetAnimal(a1);}
    void Talk(Person P1);
    void Text(Person P1);
    void PhoneCall(Person P1);
    void Shower(){hygiene.Shower();}
};