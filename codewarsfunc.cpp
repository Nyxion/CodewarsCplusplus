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
	return "Normal";
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
bool CodewarsFunc::isDividedby(int number, int a, int b)
{
	/*
	Your task is to create the function isDivideBy (or is_divide_by) to check if an integer number is divisible by both integers a and b.

	A few cases:


	(-12, 2, -6)  ->  true
	(-12, 2, -5)  ->  false

	(45, 1, 6)    ->  false
	(45, 5, 15)   ->  true

	(4, 1, 4)     ->  true
	(15, -5, 3)   ->  true
	*/

	return number % a == 0 && number % b == 0;
}
std::string CodewarsFunc::removeExclamationMarks(std::string str)
{
	/*
	Write function RemoveExclamationMarks which removes all exclamation marks from a given string.
	*/
	std::string new_string;
	for (auto i : str)
		if (i != '!')
			new_string += i;
	return new_string;
}
std::string CodewarsFunc::repeat_str(size_t repeat, const std::string& str)
{
	/*
	Write a function called repeatStr which repeats the given string string exactly n times.

	repeat_str(6, "I") // "IIIIII"
	repeat_str(5, "Hello") // "HelloHelloHelloHelloHello"
	*/
	std::string new_string;
	for (size_t i = 0; i < repeat; i++)
	{
		new_string += str;
	}
	return new_string;
}
int CodewarsFunc::square_sum(const std::vector<int>& numbers) {
	/*
	Complete the square sum function so that it squares each number passed into it and then sums the results together.

	For example, for [1, 2, 2] it should return 9 because 1^2 + 2^2 + 2^2 = 9.
	*/
	int sum = 0;
	for (auto i : numbers)
		sum += i * i;
	return sum;
}
int CodewarsFunc::sum(std::vector<int> nums)
{
	if (nums.size() <= 0) return 0;
	int returnable = 0;
	for (int i : nums)
		returnable += i;
	return returnable;
}
std::vector<std::string> CodewarsFunc::split_string_evenly(const std::string &s)
{
	/*
	Complete the solution so that it splits the string into pairs of two characters. 
	If the string contains an odd number of characters then it should replace the missing second character of the final pair with an underscore ('_').

	Examples:

	* 'abc' =>  ['ab', 'c_']
	* 'abcdef' => ['ab', 'cd', 'ef']
	*/
	
	std::vector<std::string> new_array;
	for (size_t i = 0; i < s.size(); i+=2)
	{
		std::string pair = "";
		pair.push_back(s[i]);
		if(i+1 < s.size())
			pair.push_back(s[i + 1]);
		new_array.push_back(pair);
	}

	if (s.length() % 2 != 0)
		new_array.back().push_back('_');
	return new_array;
}
std::string CodewarsFunc::seriesSum(int n)
{
	/*
	Task:
		Your task is to write a function which returns the sum of following series upto nth term(parameter).

		Series: 1 + 1/4 + 1/7 + 1/10 + 1/13 + 1/16 +...
	Rules:
		You need to round the answer to 2 decimal places and return it as String.

		If the given value is 0 then it should return 0.00

		You will only be given Natural Numbers as arguments.

	Examples:(Input --> Output)
		1 --> 1 --> "1.00"
		2 --> 1 + 1/4 --> "1.25"
		5 --> 1 + 1/4 + 1/7 + 1/10 + 1/13 --> "1.57"
	*/

	if (n <= 0) return "0.00";

	float sum = 0;
	float diviser = 1;
	for (size_t i = 0; i < n; i++)
	{
		float div = 1 / diviser;
		sum += div;
		if(n > 1) diviser += 3;
	}
	float rounded_down = floor(sum * 100) / 100;
	std::stringstream ss;
	ss << std::fixed << std::setprecision(2) << rounded_down;
	std::string s = ss.str();

	return s;
}
int CodewarsFunc::get_sum(int a, int b)
{
	/*
	Given two integers a and b, which can be positive or negative, find the sum of all the integers between and including them and return it. 
	If the two numbers are equal return a or b.

	Note: a and b are not ordered!

	Examples (a, b) --> output (explanation)
		(1, 0) --> 1 (1 + 0 = 1)
		(1, 2) --> 3 (1 + 2 = 3)
		(0, 1) --> 1 (0 + 1 = 1)
		(1, 1) --> 1 (1 since both are same)
		(-1, 0) --> -1 (-1 + 0 = -1)
		(-1, 2) --> 2 (-1 + 0 + 1 + 2 = 2)
	*/
	if (a == b) return a;
	int sum = 0;
	if (a > b)
	{
		int old = a;
		a = b;
		b = old;
	}
	for (int i = a; i <= b; i++)
	{
		sum += i;
	}
	return sum;
}
long CodewarsFunc::queueTime(std::vector<int> customers, int n)
{
	/*
	There is a queue for the self-checkout tills at the supermarket. Your task is write a function to calculate the total time required for all the customers to check out!

	Input
		customers: an array of positive integers representing the queue. Each integer represents a customer, and its value is the amount of time they require to check out.
		n: a positive integer, the number of checkout tills.
	Output
		The function should return an integer, the total time required.

	Important
		Please look at the examples and clarifications below, to ensure you understand the task correctly :)

	Examples
		queueTime(std::vector<int>{5,3,4}, 1)
		// should return 12
		// because when n=1, the total time is just the sum of the times

		queueTime(std::vector<int>{10,2,3,3}, 2)
		// should return 10
		// because here n=2 and the 2nd, 3rd, and 4th people in the 
		// queue finish before the 1st person has finished.

		queueTime(std::vector<int>{2,3,10}, 2)
		// should return 12
		Clarifications
		There is only ONE queue serving many tills, and
		The order of the queue NEVER changes, and
		The front person in the queue (i.e. the first element in the array/list) proceeds to a till as soon as it becomes free.
		N.B. You should assume that all the test input will be valid, as specified above.

		P.S. The situation in this kata can be likened to the more-computer-science-related idea of a thread pool,
		with relation to running multiple processes at the same time: https://en.wikipedia.org/wiki/Thread_pool

		queueTime(std::vector<int>{2,3,10}, 2)
		2 Goes into first till
		3 Goes into second till
		2 finishes before 3 on second till
		10 moves into first till
		equaling 12 as slowest.
	*/
	if (customers.size() < 1) return 0;

	std::vector<int> tills(n, 0);
	
	for (size_t i = 0; i < customers.size(); i++)
	{
		tills[0] += customers[i];
		std::sort(tills.begin(), tills.end());
	}
	return tills.back();
}