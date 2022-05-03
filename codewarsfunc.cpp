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
