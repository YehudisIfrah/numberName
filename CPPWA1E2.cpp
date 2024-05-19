//Written Assignment 1, Excercise 2
//A program that will specify the user's number input (1-5) in word form using a function
//I have reviewed this program using the C++ compiler on Microsoft Visual Studio 2022
#include <iostream>
#include <string> //To manipulate string
using namespace std;

//function "wordy" to assign the number in word form
string wordy(int x) {
	string word;
	if (x == 5) {
		word = "five.";
	}
	else if (x == 4) {
		word = "four.";
	}
	else if (x == 3) {
		word = "three.";
	}
	else if (x == 2) {
		word = "two.";
	}
	else if (x == 1) {
		word = "one.";
	}
	else {
		word = "out of range";
	}
	return word;
}


int main()
{
	//define the variable
	int num;

	//Prompt user for a number 1-5
	cout << "Enter a number in the range 1-5: ";
	//assign input to variable
	cin >> num;
	
	//invoke wordy to transform the number to a string
	string transform = wordy(num);
		
	//Print result
	cout << "You entered the number " << transform << endl;

	return 0;
}