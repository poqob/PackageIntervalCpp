#include "../include/Interval.h"
// Initialize the static member variable
Timer *Interval::timer = nullptr;
void Interval::run(long perMiliseconds, void (*callbackFunction)(), double timeout)
{
    Interval::timer = Interval::timer == nullptr ? new Timer() : Interval::timer;
    Interval::timer->start();

    while (true)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(perMiliseconds));
        // std::cout << "time:" << Interval::timer->elapsedMilliseconds() << "ms" << std::endl;
        callbackFunction();
        if (timeout != -1 && timeout <= timer->elapsedMilliseconds())
            break;
    }
    Interval::timer->stop();
}

Interval::Interval()
{
    Interval::timer = new Timer();
}

Interval::~Interval()
{
    delete Interval::timer;
}