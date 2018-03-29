#include <iostream>
#include "birthday.h"
using namespace std;
#include "people.h"
int main()
{
    birthday birthobj(7,28,2000);
    people tumiobj("Tumi",birthobj);
    tumiobj.printinfo();
    return 0;
}
