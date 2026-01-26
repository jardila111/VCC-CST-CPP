#include <vector>
#include <cstdlib>
#include <ctime>

// providing implementation of the function declared above

void generateRanVec(int range, int count, std::vector<int> &countVec)
{
    // initialize a vector of size 20 with all values set to 0
    // std::srand(std::time(nullptr)); // Seed for random number generation

    for (int i{0}; i < count; ++i)
    {
        int randNum{std::rand() % range};
        countVec[randNum] += 1; // increment the count for the generated random number
    }
}

float computeAverage(std::vector<int> &countVec, int count)
{
    float total{0};
    for (int i{0}; i < countVec.size(); ++i)
    {
        total += i * countVec[i];
    }
    return total / count; // total count is 1,000,000
}
