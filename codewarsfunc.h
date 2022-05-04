#pragma once
#include <iostream>
#include <string>
#include <vector>

class CodewarsFunc
{
public:
	// Fields
	std::vector<std::string> test_array;
	// Methods
	std::string bmi(double w, double h);
	std::string number_to_String(int num);
	std::vector<std::string> string_to_array(const std::string& s);
	bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left);
	bool isDividedby(int number, int a, int b);
};

