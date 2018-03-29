#include "people.h"
#include <iostream>
#include "birthday.h"
using namespace std;
people::people(string x,birthday bo)
:name (x), dateofbirth(bo)  // when you need to pass an int to class of class you need member initializer
{

}
void people::printinfo()
{
    cout<< name << " was born on ";
    dateofbirth.printDate();
}

