// 2. CountingTheNumberOfCharacters.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Create a program that prompts for an input string and displays
output that shows the input string and the number of
characters the string contains.
Example Output
What is the input string? Homer
Homer has 5 characters.
Constraints
• Be sure the output contains the original string.
• Use a single output statement to construct the output.
• Use a built-in function of the programming language to
determine the length of the string.
Challenges
• If the user enters nothing, state that the user must enter
something into the program.
• Implement this program using a graphical user interface
and update the character counter every time a key is
pressed. If your language doesn’t have a particularly
friendly GUI library, try doing this exercise with HTML
and JavaScript instead.*/
#include <iostream>
#include <string>


using namespace std;


int main()
{
	bool valid = false;
	string input;

	while (!valid)
	{
		cout << "What string would you like me to tell the length of?\n";
		cin >> input;
		if (input.length() == 0)
			cout << "You must enter a string\n";
		else
			valid = true;
	}
	cout << input << " is " << input.length() << " characters long\n";

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
