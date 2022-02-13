// 3. PrintingQuotes.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Quotation marks are often used to denote the start and end
of a string. But sometimes we need to print out the quotation
marks themselves by using escape characters.
Create a program that prompts for a quote and an author.
Display the quotation and author as shown in the example
output.
Example Output
What is the quote? These aren't the droids you're looking for.
Who said it? Obi-Wan Kenobi
Obi-Wan Kenobi says, "These aren't the droids
you're looking for."
Constraints
• Use a single output statement to produce this output,
using appropriate string-escaping techniques for quotes.
• If your language supports string interpolation or string
substitution, don’t use it for this exercise. Use string
concatenation instead.
Challenge
• In Chapter 7, Data Structures, on page 63, you’ll practice
working with lists of data. Modify this program so that
instead of prompting for quotes from the user, you create
a structure that holds quotes and their associated
attributions and then display all of the quotes using the
format in the example. An array of maps would be a
good choice.*/
#include <iostream>
#include <string>
#include <map>

using namespace std;
int main()
{
    string quote;
    string author;

    cout << "What is the quote?\n";
    getline(cin, quote);
    cout << "Who said it?\n";
    getline(cin, author);
    cout << author << " says: " << R"(")" << quote << R"(")";

    //https://www.geeksforgeeks.org/array-of-maps-in-c-with-examples/
    cout << "Working with array of maps:\n\n";
    map<string, string> arrOfMaps[3];
    //Key is string in this case; "Guitar is good" is the key. Value is "Francisco Tarrega
    arrOfMaps[0]["Guitar is good"] = "Francisco Tarrega";
    arrOfMaps[0]["Guitar is bad!"] = "Francisco Tarrega";
        
    cout << arrOfMaps[0]["Guitar is good"];
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
