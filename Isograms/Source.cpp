/*
An isogram is a word that has no repeating letters, consecutive or non-consecutive.
Implement a function that determines whether a string that contains only letters is an
isogram. Assume the empty string is an isogram. Ignore letter case.

Example: (Input --> Output)

"Dermatoglyphics" --> true "aba" --> false "moOse" --> false (ignore letter case)
*/

#include<iostream>
#include<string>
#include <algorithm>
#include <cctype>


bool is_isogram(std::string str) {
	int len = str.length();
	for (int i{ 0 }; i < len; ++i)
	{
		str[i] = tolower(str[i]);
	}
	for (int i{ 0 }; i < len; ++i)
	{
		for (int j{ 0 }; j < len; ++j)
		{
			if (i == j)
				continue;
			if (str[i] == str[j])
				return false;
		}
	}
	return true;
}

int main()
{
	std::cout << is_isogram("Dermatoglyphics");
}