//1. write a cpp program that will calculate the simple interest where the rate of interest has a default value of 15 %

#include <iostream>

// Function to calculate simple interest
double calculateSimpleInterest(double principal, double rate = 15.0, double time = 1.0)
{
    return (principal * rate * time) / 100;
}

int main()
{
    double principal;
    std::cout << "Enter principal amount: ";
    std::cin >> principal;

    double interest = calculateSimpleInterest(principal);
    std::cout << "Simple Interest with default rate (15%) is: " << interest << std::endl;

    return 0;
}