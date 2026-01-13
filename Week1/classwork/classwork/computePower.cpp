// This app asks user for 2 numbers x, and y, and then computes x^y and print it.
// pay attention that y has to be an integer to make sense.

#include <iostream>

using namespace std;

int main() {
    unsigned int x{}, y{};

    cout<<"What is the base number? ";
    cin >>x;
    cout<<"What is the exponent number?";
    cin >>y;
    unsigned int result{1};
    for(int i=0; i<y; ++i)
    {
        result = result * x;  // this is the same as result *= x
    }

    cout<<x<<" to the power of "<<y<<" is "<<result;
    return 0;
}