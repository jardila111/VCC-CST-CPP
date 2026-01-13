#include <iostream>
using namespace std;

// This script draws different shapes using asterisks (*) based on user input.
int main()
{
    int choice{}; // Declaring the variable to store user choice
    cout << "What shape do you like to draw:\n";
    cout << "Choose 1 for solid and hollow rectangle\n";
    cout << "Choose 2 for a right angle triangle\n";
    cin >> choice;

    if (choice == 1)
    {
        int length{}, width{};
        cout << "Enter length of the rectangle: \n";
        cin >> length;
        cout << "Enter width of the rectangle: \n";
        cin >> width;

        // Drawing solid rectangle
        cout << "Solid Rectangle:\n";
        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < length; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        // Drawing hollow rectangle
        cout << "Hollow Rectangle:\n";
        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < length; j++)
            {
                if (i == 0 || i == width - 1 || j == 0 || j == length - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
        // Drawing the triangle
    }

    else if (choice == 2)
    {
        int width{};
        int height{};
        cout << "Enter width of the triangle: \n";
        cin >> width;

        // Drawing the triangle (base on top)
        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < width - i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    cout << "Do you want to try again? (y for yes, n for no)\n";
    char retry{};
    cin >> retry;
    if (retry == 'y' || retry == 'Y')
    {
        main(); // Call main to restart the program
    }
    else
    {
        cout << "Thank you for using the shape drawer!\n";
    }   
    return 0;
}

    
