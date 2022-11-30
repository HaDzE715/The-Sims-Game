#include <iostream>
#include "Social.h"
#include "Person.h"

using namespace std;

void Social::Talk(Person p1)
{
    this->level += 5;
}
void Social::Text(Person p1)
{
    this->level += 5;
}
void Social::PhoneCall(Person p1)
{
    this->level += 5;
}
