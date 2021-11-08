#include <stdio.h>
#include <math.h>

#define TRUE 1
#define FALSE 0

int isArmstrong(int num);
int isArmstrongRecursion(int num, int length);
int numberLength(int num);
int isPalindrome(int num);
int isPalindromeRecursion(int num, int length);

int isArmstrong(int num)
{
	if (num == 0) {
		return FALSE;
	}
	else {
		int length = numberLength(num);
		int thisDigit = num % 10;
		thisDigit = (int)pow((double)thisDigit, (double)length);
		int sum = isArmstrongRecursion(num / 10, length) + thisDigit;
		if (sum == num)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
	}
}
//this is the recursion call of the isArmstrong function

int isArmstrongRecursion(int num, int length)
{
	if (num == 0) {
		return 0;
	}
	else {
		int thisDigit = num % 10;
		thisDigit = (int)pow((double)thisDigit, (double)length);
		return isArmstrongRecursion(num / 10, length) + thisDigit;

	}

}

static int isPalindrome(int num)
{
	if (num < 10) {
		return TRUE;
	}
	else {
		int length = numberLength(num);
		int power = (int)pow(10.0, (double)(length - 1));
		int maxDigit = num / power;
		int minDigit = num % 10;
		if (maxDigit == minDigit)
		{
			int tempNum = num % power;
			tempNum = (int)tempNum / 10;
			length = length - 2;
			int answer;
			answer = isPalindromeRecursion(tempNum, length);
			return answer;
		}
		else
		{
			return FALSE;
		}
	}
}

int isPalindromeRecursion(int num, int length)
{
	if (num < 10)
	{
		return TRUE;
	}
	else
	{
		int power = (int)pow(10.0, (double)(length - 1));
		int maxDigit = num / power;
		int minDigit = num % 10;
		int tempNum = num % power;
		tempNum = (int)tempNum / 10;
		length = length - 2;
		int answer;
		answer = isPalindromeRecursion(tempNum, length);
		if (maxDigit == minDigit && answer)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
	}
}

//this function count how many digits are in a number
int numberLength(int num)
{
	if (num == 0) {
		return 0;
	}
	else
	{
		int sum;
		sum = numberLength(num / 10) + 1;
		return sum;
	}
}