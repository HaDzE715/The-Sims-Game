#include <iostream>
#include "Animal.h"
#include <string.h>


using namespace std;

Animal::Animal(const char *fname, const char *NKind)
{
    this->firstname = strdup(fname);
    this->kind = strdup(NKind);
}

void Animal::Eat(Food f1)
{
    cout << "Yay! You feed " << this->firstname << "!" <<endl;

}