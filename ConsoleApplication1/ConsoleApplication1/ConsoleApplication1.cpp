// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include "namespace.h"
using namespace mycode;
using namespace std; 


namespace mycode {
	void foo() {
		std::cout << "foo() called in the mycode namespace" << std::endl;
	}
}
int addNumbers(int number1, int number2)
{
	return number1 + number2;
}
void mysteryFunction(std::string* someString)
{
	*someString = "Test"; // Will not compile
}
int main()
{
    std::cout << "Hello World!\n" << std::endl;
	foo(); 
	array<int, 3> arr = { 9, 8, 7 };
	cout << "Array size  = " << arr.size() << endl;
	cout << "Element 2 = " << arr[1] << endl;
	int sum = addNumbers(5, 3);
	cout << "5 + 3 is " << sum << endl;
	int i = 8;

	int* myIntegerPointer = &i;
	cout << "The value of my pointer address is " << myIntegerPointer << endl;
	myIntegerPointer = nullptr;
	std::string myString = "The string";
	mysteryFunction(&myString);
	cout << myString << endl;

	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
