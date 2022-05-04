#include "codewarsfunc.h"

std::string CodewarsFunc::bmi(double w, double h)
{
	float bmi = (w / (h * h));
	std::cout << bmi << std::endl;
	if (bmi <= 18.5)
	{
		return "Underweight";
	}
	else if (bmi <= 25.0)
	{
		return "Normal";
	}
	else if (bmi <= 30.0)
	{
		return "Overweight";
	}
	else if (bmi > 30.0)
	{
		return "Obese";
	}
}

std::string CodewarsFunc::number_to_String(int num)
{
	return std::to_string(num);
}

std::vector<std::string> CodewarsFunc::string_to_array(const std::string& s)
{
	std::vector<std::string> string_array;
	std::string delimiter = " ";
	std::string token = "";
	size_t pos_start = 0;
	size_t pos_end = 0;
	size_t delim_len = delimiter.length();

	while ((pos_end = s.find(delimiter, pos_start)) != std::string::npos)
	{
		token = s.substr(pos_start, pos_end - pos_start);
		pos_start = pos_end + delim_len;
		string_array.push_back(token);
		test_array.push_back(token);
	}

	string_array.push_back(s.substr(pos_start));
	test_array.push_back(s.substr(pos_start));
	return string_array;
}

bool CodewarsFunc::zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left)
{
	/*
	You were camping with your friends far away from home, but when it's time to go back, you realize that your fuel is running out and the nearest pump is 50 miles away! 
	You know that on average, your car runs on about 25 miles per gallon. 
	There are 2 gallons left. Considering these factors, write a function that tells you if it is possible to get to the pump or not. 
	Function should return true (1 in Prolog, NASM and COBOL) if it is possible and false (0 in Prolog, NASM and COBOL) if not. 
	The input values are always positive.
	*/
	/*
		how many miles per gallon goes into distance_to_pump if greater than fuel_left then false else true	
	*/
	uint32_t fuel_used = 0;
	uint32_t dtp = distance_to_pump;
	uint32_t miles_p_gallon = mpg;
	while (fuel_left != 0)
	{
		dtp = dtp - mpg;
		fuel_used++;
		fuel_left--;
	}
	if (dtp > 0)
		return false;
	return true;
}
