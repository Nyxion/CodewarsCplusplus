#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <queue>

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
	std::string removeExclamationMarks(std::string str);
	std::string repeat_str(size_t repeat, const std::string& str);
	int square_sum(const std::vector<int>& numbers);
	int sum(std::vector<int> nums);
	std::vector<std::string> split_string_evenly(const std::string &s);
	std::string seriesSum(int n);
	int get_sum(int a, int b);
	long queueTime(std::vector<int> customers, int n);
};

