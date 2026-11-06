// Chapter 5 Exercise 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int count = 0;
	char letter = 0;
	for (char letter = 32; letter < 127; letter++)
	{
		cout << letter;
		++count;

		if (count == 16)
		{
			cout << '\n';
			count = 0;
		}
	}
	return 0;
}

