#include <iostream>
using namespace std;

// This script draws different shapes using asterisks (*) based on user input.
int main()
{
    int choice{}; // Declaring the variable to store user choice
    cout << "What shape do you like to draw:\n";
    cout << "Choose 1 for filled and hollow rectangle\n";
    cout << "Choose 2 for a right-angle triangle\n";
    cin >> choice;

    if (choice == 1)
    {
        int width{}, height{};
        cout << "Enter width of the rectangle: \n";
        cin >> width;
        cout << "Enter height of the rectangle: \n";
        cin >> height;
        // Drawing both rectangles side by side
        cout << "Filled Rectangle:          Hollow Rectangle:\n";
        for (int i = 0; i < width; i++)
        {
            // Draw solid rectangle
            for (int j = 0; j < height; j++)
            {
                cout << "* ";
            }
            cout << "     ";
            // Draw hollow rectangle
            for (int j = 0; j < height; j++)
            {
                if (i == 0 || i == width - 1 || j == 0 || j == height - 1)
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
    }
        else if (choice == 2)
    {
        int width{};
        cout << "Enter width of the right-angle triangle: \n";
        cin >> width;

        // Drawing the right-angle triangle (base on top)
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
    cout << "Thank you for using the shape drawer app!\n";
}
return 0;
}
