// ReverseString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This was started by a lesson on Exercism.io about reversing a string, so I started working on ways to reverse a string

#include <iostream>
#include <string>
using namespace std;

void passByValue(string str);
void passByReference(string& str);

void reverseStringWithIterator(const string& str);
string sendReverseStringBack(const string& str);

int main()
{
	string response = "";
	
	cout << "Enter a string: ";

	getline(cin, response);

	//if we pass by value there is no way to change the string but...
	passByValue(response);
	cout << response << endl;
	//if we pass by refernec we can change it up
	passByReference(response);
	cout << response << endl;

	reverseStringWithIterator(response);
	response = sendReverseStringBack(response);
	cout << response << endl;


	return 0;
}

/// <summary>
/// Pass a string in by value to show you cannot changte the value of the string
/// </summary>
/// <param name="str">the string we pass by value</param>
void passByValue(string str)
{
	str = "Holy Cow";
}

/// <summary>
/// Pass a string in by reference and change the value of the sdtring
/// </summary>
/// <param name="str">the string we pass by reference</param>
void passByReference(string& str)
{
	str = "Holy Cow";
}

/// <summary>
/// Reverses a string using an iterator. Specifically it uses the reverse iterator iun the string class which goes backward over the string then we print the string
/// letter by letter in reverse order
/// </summary>
/// <param name="str"> the string we want to reverse. No need to modify it so we make it const. Pass by reference, but does it really matter</param>
void reverseStringWithIterator(const string& str)
{
	for (std::string::const_reverse_iterator rit = str.rbegin(); rit != str.rend(); rit++)
	{
		cout << *rit;
	}

	//endl;
}

/// <summary>
/// Reverses a string using an iterator. Specifically it uses the reverse iterator iun the string class which goes backward over the string then we print the string
/// letter by letter in reverse order
/// </summary>
/// <param name="str"> the string we want to reverse. No need to modify it so we make it const. Pass by reference, but does it really matter</param>
/// <returns> The reversed version of the string we passed in</returns>
string sendReverseStringBack(const string& str)
{
	string temp;
	for (std::string::const_reverse_iterator rit = str.rbegin(); rit != str.rend(); rit++)
	{
		temp += *rit;
	}

	return temp;
}
