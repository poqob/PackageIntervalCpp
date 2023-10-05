#if !defined(LAMBDA)
#define LAMBDA
#include <iostream>
// HOW TO CREATE LAMBDA FUNCTION

// Create a LAMBDA function with parameters
auto myCallback = [](int x, int y)
{
    std::cout << "Lambda called with parameters: " << x << " and " << y << std::endl;
};

// Pass the lambda function to another function
// myCallback(42, 99);
#endif // LAMBDA
