#include <iostream>
#include <string.h>
#include "Food.h"

using namespace std;

Food::Food(const char *Fname, int NWorth)
{
    this->name = strdup(Fname);
    this->worth = NWorth;
}