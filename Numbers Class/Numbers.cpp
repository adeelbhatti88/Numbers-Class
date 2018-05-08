#include "Numbers.h"



Numbers::Numbers(int n)
{

	number = n;
}

/*void Numbers::print()
{

	if (number < 20)
	{
		cout << lessThan20[number] << endl;
	}

	if (number > 20 && number < 100)
	{
		cout << ty[number - 20] << lessThan20[number - 20] << endl;
	}


}*/

void Numbers::print()

{
	
		if (number >= 0 && number < 20)  //executes pefectly
			
		{
			
				cout << lessThan20[number] << " dollars";
			
		}
	
		else if (number >= 20 && number < 100) //2 digit numbers, > 20
		
		{
			

		
				//check 1st digit of 2 digit number, and assign it int firstNum
			firstNum = number / 10 % 10;
		
				
				//check 2nd digit & assign it to, int secondNum
			secondNum = number % 10;

				
				//cout <<  greaterThan19[firstNum] << lessThan20[secondNum]<< " dollar";
			cout << greaterThan19[firstNum - 2] << lessThan20[secondNum] << endl;
				
		}
	
		else if (number >= 100 && number < 1000) //3 digit numbers, < 1000
		
		{
			firstNum = number / 100 % 10;
			secondNum = number / 10 % 10;
			thirdNum = number % 10;
				//if statement checks if last 2 digits are less than 20
			if (firstNum < 20 && number <= 109)
			{
				cout << lessThan20[firstNum] << hundred << lessThan20[thirdNum] << endl;
				
			}

			if (firstNum < 20 && number >= 110 && number <= 119)
			{
				
				cout << lessThan20[firstNum] << hundred << lessThan20[(thirdNum + 10)] << endl;
				
				
			}

			if (firstNum < 20 && number >= 120)
			{
				cout << lessThan20[firstNum] << hundred << greaterThan19[secondNum - 2] << lessThan20[thirdNum] << endl;
				
			}
			
		}
	
		else if (number >= 1000 && number < 10000)  
		
		{
			firstNum = number / 1000 % 10;
			secondNum = number / 100 % 10;
			thirdNum = number / 10 % 10;
			fourthNum = number % 10;
			//if statement checks if last 2 digits are less than 20
			if (firstNum < 20 && number <= 1009)
			{
				cout << lessThan20[firstNum] << thousand << lessThan20[fourthNum] << endl;

			}

			if (firstNum < 20 && number >= 1110 && number <= 1119)
			{

				cout << lessThan20[firstNum] << thousand << lessThan20[firstNum] << hundred << lessThan20[(fourthNum + 10)] << endl;


			}
			
			
				//cout << lessThan20[number]<< " dollar";
				
		}
	
}




Numbers::~Numbers()
{
}
