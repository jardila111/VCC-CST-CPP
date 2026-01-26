#include <iostream>
#include <array>
#include <vector>
#include <string>
#include "myPrint.h"

//void printArray(const std::array<int, 5>& arr) {
//	for (auto a : arr)
//		std::cout << a << ",";
//	std::cout << std::endl;
//}

void printVector(const std::vector<std::string>& vec) {
	for (const auto& str : vec) {
		std::cout << str << ", ";
		
	}
	std::cout << std::endl;
}


int main() {
	//myprint("Hello everybody");

	// create an array example
	/*std::array <int, 5> myArray{ 3, 2, 1, -34, 81 };
	myArray[1] = 9;
	printArray(myArray);*/

	// task: Increment all mebers of the array by 5, Then print the array.
	/*for (int &a : myArray) {
		a += 5;
		
	}
		
	printArray(myArray);*/

	// Vector
	std::vector<std::string> myfriends{};
	myfriends.push_back("John");
	

	myfriends.push_back("Roni");
	std::cout << "Size of the vector: " << myfriends.size() << std::endl;

	myfriends.insert(myfriends.begin(), "Edward");

	//practice: Insert "Reza" at second position and "Xing" at 4th position in the vector

	myfriends.insert(myfriends.begin() + 1, "Reza");
	myfriends.insert(myfriends.begin() + 3, "Xing");

	printVector(myfriends);


	return 0;
}