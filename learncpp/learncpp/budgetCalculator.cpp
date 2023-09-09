
// Write the following program: The user is asked to enter 2 floating point numbers (use doubles). 
// The user is then asked to enter one of the following mathematical symbols: +, -, *, or /. 
// The program computes the answer on the two numbers the user entered and prints the results. 
// If the user enters an invalid symbol, the program should print nothing.

#include <iostream>


double getInput()
{
	double input{};

	std::cout << "Enter a double value: ";
	std::cin >> input;
	return input;
}


char getOPType()
{
	char OPType{};

	std::cout << "Enter one of the following: +, -, *, or /: ";
	std::cin >> OPType;
	return OPType;
}


double performOP(double a, double b, char operation)
{
	if (operation == '+')
	{
		return a + b;
	} 
	else if (operation == '-')
	{
		return a - b;
	}
	else if (operation == '*')
	{
		return a * b;
	}
	else if (operation == '/')
	{
		return a / b;
	}

	throw std::runtime_error("Invalid operator.");
	return 0;
}


int main()
{
	double num1{ getInput() };
	double num2{ getInput() };
	char OP{ getOPType() };

	try
	{
		double result{ performOP(num1, num2, OP) };
		std::cout << num1 << " " << OP << " " << num2 << " is " << result;
	}
	catch (const std::runtime_error& e)
	{
		std::cout << "Error: " << e.what();
	}

	return 0;
}









