#pragma once
#include "Food.h"


class Animal
{
    private:

    char *firstname;
    char *kind;

    public:

    Animal(){}
    Animal(const char *fname, const char *NKind);
    ~Animal(){}

    void Eat(Food f1);

    char *getPetName(){return this->firstname;}
};