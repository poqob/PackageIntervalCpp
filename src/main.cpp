#include "../include/Timer.hpp"
#include "../include/Interval.h"
#include "iostream"
using namespace std;

void function()
{
    cout << "specified function called." << endl;
}

int main()
{
    Interval().run(1, function, 3);
    return 0;
}
