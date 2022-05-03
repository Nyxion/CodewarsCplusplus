#pragma once
#include <iostream>
#include <string>
#include <vector>

class CodewarsFunc
{
public:
	std::vector<std::string> test_array;
	std::string bmi(double w, double h);
	std::string number_to_String(int num);
	std::vector<std::string> string_to_array(const std::string& s);
};

