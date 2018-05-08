#include <iostream>
#include <string>

using namespace std;

#include "Numbers.h"
int firstDigit;
int secondDigit;
int thirdDigit;
int fourthDigit;
void check(int n)
{
	cout << n << endl;

	firstDigit = n / 1000 % 10;

	cout << "First Digit" << firstDigit << endl;

	secondDigit = n / 100 % 10;

	cout << "SEcond Digit" << secondDigit << endl;

	thirdDigit = n / 10 % 10;

	cout << "Third digit" << thirdDigit << endl;

	fourthDigit = n % 10;

	cout << "fourth digit" << fourthDigit << endl;

}

int main()
{
	int n;

	


	cout << "Please enter a number: ";
	cin >> n;

	

	//check(n);




	Numbers num(n);
	 num.print();


	return 0;
}