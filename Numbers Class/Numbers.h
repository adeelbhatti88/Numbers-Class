#pragma once
#include <iostream>
#include <string>

using namespace std;
class Numbers
{
private:
	
	int number;
	int firstNum;
	int secondNum;
	int thirdNum;
	int fourthNum;
	
	string lessThan20[20] = {"Zero", "one", "two", "three", "four", "five",
	"six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
	"sixteen", "seventeen", "eighteen", "nineteen"};

	string greaterThan19[8] = {"twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};

	string hundred = "hundred";
	string thousand = "thousand"; 
public:
	Numbers(int);
	void print();
	~Numbers();
};

