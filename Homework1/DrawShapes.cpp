#include <iostream>
using namespace std;

//This script draws different shapes using asterisks (*) based on user input.
int main() {
    int choice = {}; //Declaring the variable to store user choice
    cout << "What shape do you like to draw:\n";
    cout << "Choose 1 for solid and hollow rectangle\n";
    cout << "Choose 2 for a right angle triangle\n";
    cin >> choice;

    if (choice == 1) {
        int length = {}, width = {};
        cout << "Enter length and width of the rectangle: ";
        cin >> length >> width;

        // Drawing solid rectangle
        cout << "Solid Rectangle:\n";
        for (int i = 0; i < width; i++) {
            for (int j = 0; j < length; j++) {
                cout << "* ";
            }
            cout << endl;
        }
        return 0;
    }
}