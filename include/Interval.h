#if !defined(INTERVAL)
#define INTERVAL
#include "Timer.hpp"
#include <thread>
using namespace std;
class Interval
{

public:
    static Timer *timer;
    Interval();
    ~Interval();
    static void run(long perMiliseconds, void (*callbackFunction)(int, int), double timeout = -1.0);
};

#endif // INTERVAL
