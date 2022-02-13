// 7. AreaOfARectangularRoom.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
When working in a global environment, you’ll have to
present information in both metric and Imperial units. And
you’ll need to know when to do the conversion to ensure
the most accurate results.
Create a program that calculates the area of a room. Prompt
the user for the length and width of the room in feet. Then
display the area in both square feet and square meters.
Example Output
What is the length of the room in feet? 15
What is the width of the room in feet? 20
You entered dimensions of 15 feet by 20 feet.
The area is
300 square feet
27.871 square meters
The formula for this conversion is
m2 = f2 × 0.09290304
Constraints
• Keep the calculations separate from the output.
• Use a constant to hold the conversion factor.
Challenges
• Revise the program to ensure that inputs are entered as
numeric values. Don’t allow the user to proceed if the
value entered is not numeric.
• Create a new version of the program that allows you to
choose feet or meters for your inputs.
• Implement this program as a GUI program that automatically
updates the values when any value changes*/

#include <iostream>
#include "RectangularRoom.h";
#include <string>
#include "ConsoleHelper.h";

using namespace std;

int main()
{
	bool validated = false;
	string meterOrFeet;
	double length, width;

	try
	{
		WriteLine("Meter or feet?");
		getline(cin, meterOrFeet);
		WriteLine("Enter length: ");
		cin >> length;
		WriteLine("Enter width: ");
		cin >> width;

		if (length > 0 && width > 0)
			validated = true;
		else
		{
			WriteLine("Something went wrong, try again.\n");
			return -1;
		}
	}
	catch (const std::exception&)
	{
		WriteLine("Didn't enter a valid number. Try again.");
		cout << endl;
	}

	RectangularRoom rectRoom(length, width, Measurement::Meter);


	cout << rectRoom.GetAreaOfRoom() << endl;
	return 0;
}

