
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int ComputeSumOfSquares(std::vector<int>& vec);
int main()
{
    // Seed random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    char tryAgain;
    
    do {
        //1- ask user to enter number m between 5 to 15(This is going to be the size of a vector of random numbers). 
        int m;
        std::cout << "Enter a number between 5 and 15: ";
        
	//2- receive the number m
        std::cin >> m;
        
        // Validate input
        while (m < 5 || m > 15) {
            std::cout << "Invalid input. Please enter a number between 5 and 15: ";
            std::cin >> m;
        }
        
	//3- create a vector of size m and fill it up with m random integers between -10 and 10.
        std::vector<int> vec(m);
        std::cout << "Vector contents: ";
        for (int i = 0; i < m; i++) {
            vec[i] = (rand() % 21) - 10;  // generates random numbers between -10 and 10
            std::cout << vec[i] << " ";
        }
        std::cout << std::endl;
        
	//4- call the function ComputeSumOfSquares() by passing to it the vector you created above.
	//5- the function above should add square of all the numbers in the vec and return the result. 
        int result = ComputeSumOfSquares(vec);
        
	//6- receive the result and print it out. 
        std::cout << "Sum of squares: " << result << std::endl;
        
	//7- ask user if she likes to try again. If she says yes, then go back to step 1 and repeat the process.
        std::cout << "Would you like to try again? (y/n): ";
        std::cin >> tryAgain;
        
    //8- If the answer is no, the program should end.
    } while (tryAgain == 'y' || tryAgain == 'Y');
    
    return 0;
}

// This function accummulates sum of squares of the numbers in vector vec.
int ComputeSumOfSquares(std::vector<int>& vec)
{
    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i] * vec[i];
    }
    return sum;
}