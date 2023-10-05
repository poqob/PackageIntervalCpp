#include "../include/Interval.h"
// Initialize the static member variable
Timer *Interval::timer = nullptr;

void Interval::run(long perMiliseconds, void (*callbackFunction)(int x, int y), double timeout)
{
    Interval::timer = Interval::timer == nullptr ? new Timer() : Interval::timer;
    Interval::timer->start();

    while (true)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(perMiliseconds));
        // std::cout << "time:" << Interval::timer->elapsedMilliseconds() << "ms" << std::endl;
        callbackFunction(1, 1);
        if (timeout != -1 && timeout <= timer->elapsedMilliseconds())
            break;
    }
    Interval::timer->stop();
    delete Interval::timer;
    Interval::timer = nullptr;
}

Interval::Interval()
{
}

Interval::~Interval()
{
}