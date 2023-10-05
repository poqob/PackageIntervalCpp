#include "../include/Timer.hpp"
#include "../include/Interval.h"
#include "iostream"
using namespace std;
static int counter = 0;

// demonstrate parametered callback function usage.
void _function(int x, int y)
{
    counter++;

    cout << "specified _function called." << endl;
}

int main()
{
    Interval().run(70, _function, 1000);
    cout << "DONE: " << counter << endl;
    return 0;
}