#include <iostream>
#include <string>
//This program takes a string input and compares it to another string
//and does one thing if they match, and something else if they don't

bool compare(std::string a, std::string b)
	{
		if (a == b) return true;
		else
			return false;
	}

int main()
{
	std::string a;
	std::string b = "January";
	
	std::cout << "User input: ";
	std::cin >> a;
		
	bool answer = compare(a, b);
		if (answer == true)
	{
		std::cout << "It is a match!\n";
		return 0;
	}
	else
	{
		std::cout << "WRONG!!!\n";
	}
	return 0;
}