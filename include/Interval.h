#if !defined(INTERVAL)
#define INTERVAL
#include "Timer.hpp"
#include <thread>
#include "chrono"
#include <ctime>
#include <iostream>
#include <cmath>
using namespace std;
class Interval
{

public:
    static Timer *timer;
    Interval();
    ~Interval();
    static void run(long perMiliseconds, void (*callbackFunction)(), double limit = -1.0);
};

#endif // INTERVAL
