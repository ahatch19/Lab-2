// Exxercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <istream>
using namespace std;

int main()
{
	string title1;
	cout << "Enter the book title:";
	getline(cin, title1);
	string author1;
	cout << "Enter the author:";
	getline(cin, author1);
	int publish1;
	cout << "Enter the publish year:";
	cin >> publish1;
	int pages;
	cout << "Enter total number of pages:";
	cin >> pages;
	if (publish1 > 2009) {
		cout << title1 << " is less than 10 years old.\n";
	}
	else {
		cout << title1 << " is at least 10 years old.\n";
	}
	if (pages < 100) {
		cout << title1 << " is short\n";
	}
	else if (pages >= 100 && pages <= 300) {
		cout << title1 << " is an average book\n";
	}
	else {
		cout << title1 << " is a long book\n";
	}

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
