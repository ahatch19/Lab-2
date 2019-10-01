
#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std; 

int main()
{
	int User_age;
	cout << "Enter your age:";
	cin >> User_age;
	int New_age = User_age + 10;
	cout << "In ten years you will be " << New_age << " years old.\n";
	int temp;
	cout << "Enter the temperture in degrees fahrenheit:";
	cin >> temp;
	double cel = (temp - 32);
	double final = (cel * 5/9);
	cout << "The temperature in degrees celsius is " << final << "";
	return 0;
}