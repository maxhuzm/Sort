
#include <iostream>

const double PI = 3.1416;

float circle_area(float r)
{
    float result = PI * r * r;
    return result;
}

int main()
{
    float r = 12.5;
    std::cout << circle_area(r);
}

