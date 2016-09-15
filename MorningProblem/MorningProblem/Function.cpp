#include <iostream>

// create a function that takes in three numbers and returns the sum multiplied by 5 (has to be able to handle Float and Integer values)


float Function (float a, float b, float c)
{
float Sum = a + b + c;
float SumMultiplied = Sum * 5;
std::cout << SumMultiplied << std::endl;
return SumMultiplied;
}

int main()
{
	float a;
	float b;
	float c;
	std::cin >> a >> b >> c;
	Function(a, b, c);
	system("pause");
}