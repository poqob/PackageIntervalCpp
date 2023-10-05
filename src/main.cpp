#include "../include/Timer.hpp"
#include "../include/Interval.h"
#include "iostream"
using namespace std;
static int counter = 0;
void function()
{
    counter++;
    cout << "specified function called." << endl;
}

int main()
{
    Interval().run(70, function, 1000);
    cout << "DONE: " << counter << endl;
    return 0;
}
