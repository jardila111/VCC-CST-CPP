/*
We want to generate a very large number of ramdom numbers between  0 to 20. We save the numbers
to a vector and at the end we print the number of times each number appeared in this vector .
If the number were random, they should spread more or less equally among all the possible numbers from 0 to 20.
*/
#include <iostream>
#include <random>
#include <vector>
#include <ctime>
#include <stdlib.h>
#include "tools.h"
#include "tools.cpp"

// No let's go on doing our task which is generating 10,000,000 random numbers in range [0, 20)
// we keep track of number of times each number appeared in a vector countVec

// task: create a function that takex range and count as parameters and populates and returns countVec
//  declaration of this function would be like this: void generateRanVec(int range, int count, std::vector<int>& countVec);


int main()
{
    std::srand(std::time(nullptr)); // Seed for random number generation

    int num{10};
    // int *pNum{&num}; Old pointer version for reference purpose (to be used in special cases)
    int &rNum{num}; // instead of using pointer, we will use reference type for referencing an address to a type.

    // std:: cout<<"Generating 10 random numbers between 0 to "<<RAND_MAX<<": "<<std::endl;
    // for (int i = 0; i < 10; ++i) {
    //     int randNum {std::rand() % 20};
    //     std::cout << "index" << i << ": random number = " << randNum << std::endl;
    // }
    const int range{20};
    const int count{1000000};
    std::vector<int> countVec(range, 0);

    generateRanVec(range, count, countVec);

    // Let's print the results
    for (int i = 0; i < range; ++i)
    {
        std::cout << "Count of " << i << " is " << countVec[i] << std::endl;
    }

    // find the mean (average) of the generated random numbers
    auto average = computeAverage(countVec, count);

    std::cout << "average is: " << average << std::endl;

    return 0;
}

