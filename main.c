#include <stdio.h>
#include "NumClass.h"
void printArmstrong(int lowNum, int highNum);
void printPalindrome(int lowNum, int highNum);
void printPrime(int lowNum, int highNum);
void printStrong(int lowNum, int highNum);


void main()
{

	int lowerNum;
	int highNum;

	printf("enter lowe number:\n");
	lowerNum=scanf("%d", &lowerNum);
	printf("enter High number\n");
	highNum=scanf("%d", &highNum);


	printArmstrong(lowerNum, highNum);
	printPalindrome(lowerNum, highNum);
	printPrime(lowerNum, highNum);
	printStrong(lowerNum, highNum);




}
//prints all the Prime numbers between lowNum and highNum
void printPrime(int lowNum, int highNum)
{
	printf("The Prime numbers are: ");
	for (int i = lowNum; i <= highNum; i++)
	{
		if (isPrime(i))
		{
			printf("%d, ", i);
		}
	}
	printf("\n");
}

//prints all the Armstrong numbers between lowNum and highNum
void printArmstrong(int lowNum, int highNum)
{
	printf("The Armstrong numbers are: ");
	for (int i = lowNum; i <= highNum; i++)
	{
		if (isArmstrong(i))
		{
			printf("%d, ", i);
		}
	}
	printf("\n");
}

//prints all the Strong numbers between lowNum and highNum
void printStrong(int lowNum, int highNum)
{
	printf("The Strong numbers are: ");
	for (int i = lowNum; i <= highNum; i++)
	{
		if (isStrong(i)) {
			printf("%d, ", i);
		}
	}
	printf("\n");
}

//prints all the Palidromes between lowNum and highNum
void printPalindrome(int lowNum, int highNum)
{
	printf("The Palindrome numbers are: ");
	for (int i = lowNum; i <= highNum; i++)
	{
		if (isPalindrome(i))
		{
			printf("%d, ", i);
		}
	}
	printf("\n");
}