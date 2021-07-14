#include <namespace1/result.hpp>
#include <namespace2/result.hpp>

#include <iostream>

int main(int argc, char *argv[])
{
    namespace1::result result1;
    namespace2::result result2;

    std::cout << "result1: " << result1.fancyCalculation() << "result2: " << result2.fancyCalculation();
}
