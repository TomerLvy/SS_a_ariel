#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TRUE 1
#define FALSE 0
int getLength(int num);
int getLength(int num);

int isPalindrome(int num) {

	int number = num;
	int reminder = 0;
	int pal = 0;
	while (num > 0) {
		reminder = num % 10;
		pal = pal * 10;
		pal += reminder;
		num = num / 10;
	}

	if (number == pal) { return TRUE; }
	else { return FALSE; }

}

int isArmStrong(int num) {
	int temp = 0;
	int length = getLength(num);
	int sum = 0;
	int number = num;
	while (num > 0) {
		temp = num % 10;
		sum =sum+ (int)pow(temp, length);
		num = num / 10;
	}

	if (sum == number) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}

int getLength(int num) {
	int ans = 0;

	while (num > 0) {
		num = num / 10;
		ans++;
	}

	return ans;
}