#include <iostream>
#include <random> //this in needed for generating random numbers
#include <string>
#include <ctime> // this is needed for seeding the random number generator
using namespace std;

/*
Step 1: print a message explaining how to play the game.
Step 2: Game engine should pick a random number between 1 and 100.
Step 3: Ask the player to choose a number.
Step 4: Compare player's number with the chosen number.
        If player's number is less than chosen number, print "Too low!". Try again.
        If player's number is greater, print "Too high!". Try again.
        If player's number is equal to chosen number, print "Congratulations! You won!". Do you want to play again? (y/n)
Step 5: If player chooses to play again, repeat from Step 2. Otherwise

*/

int main()
{
    // Step 1:

    cout << "Thes is a game of GuessANumber. I have a hidden number between\
  0 and 100. Try to gess this number now: "
         << endl;

    // Step 2:

    bool playAgainFlag = true; // This flag is used to control the outer game loop

    //task: modify the code to limit the number of guesses 
    const unsigned int MaxGuessCount{5}; // maximum number of guesses allowed

    do
    {
        srand(time(0));                  // seeding the random number generator
        int hiddenNumber = rand() % 100 + 1; // generates a random number between 1 and 100.
        cout << " (For debugging purposes, the hidden number is: " << hiddenNumber << " ) " << endl;
        int playerNumber{};                  // declaring variable to store player's guess.
        bool playerGuessIncorrect = true;    // This flag is used to indicate if player's guess is incorrect.
        unsigned int guessCount = 0;          // counter for the number of guesses
        cout << guessCount << endl;

        // Step 3
        do
        {
            cout << "Pick a number: " << endl;
            cin >> playerNumber;
            guessCount++;

            // Step 4:
            if(guessCount == MaxGuessCount) {
                playerGuessIncorrect = false; // exit the loop since max guesses reached
                playAgainFlag = false; // default to not playing again
                cout << "You have lost the game after " << MaxGuessCount << " guesses." << endl;
                cout << "Sorry, you've reached the maximum number of guesses. The hidden number was " << hiddenNumber << "." << endl;
                cout << "Do you want to play again? (y/n)" << endl;
                string response{""};
                cin >> response;
                if (response == "y" || response == "Y")
                {
                    playAgainFlag = true; // restart the game
                }
                else
                {
                    playAgainFlag = false; // exit the game
                }
            }
            else if (playerNumber == hiddenNumber)
            {
                playerGuessIncorrect = false; // player's guess is correct
                cout << " You won! Congratulations!. Do you want to play again? (y/n)" << endl;
                string response{""};
                cin >> response;
                if (response == "y" || response == "Y")
                {
                    playAgainFlag = true; // restart the game
                }
                else
                {
                    playAgainFlag = false; // exit the game
                }
            }
            else
            { // means player's guess was not correct
                if (playerNumber < hiddenNumber)
                {
                    cout << "Too low! Try again." << endl;
                }
                else
                { // this means player's guess was greater than hidden number
                    cout << "Too high! Try again." << endl;
                }
                playerGuessIncorrect = true; // player's guess is still incorrect
                
            }
        } while (playerGuessIncorrect); 
    } while (playAgainFlag); // end of outer do-while loop

    return 0;
}
