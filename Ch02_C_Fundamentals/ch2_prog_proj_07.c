/*
 * ch2_prog_proj_07.c
 *
 *  Created on: Nov 19, 2019
 *      Author: SuperMoudy
 */

// Project 7: Smallest number of bills

#include <stdio.h>

int main(void)
{
	int USD_amount, _20_USD = 0, _10_USD = 0, _5_USD = 0, _1_USD = 0;

	printf("Enter a dollar amount: ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &USD_amount);

	if(USD_amount > 20)
	{
		_20_USD = USD_amount / 20;
		USD_amount %= 20;
	}

	if(USD_amount > 10)
	{
		_10_USD = USD_amount / 10;
		USD_amount %= 10;
	}

	if(USD_amount > 5)
	{
		_5_USD = USD_amount / 5;
		USD_amount %= 5;
	}

	_1_USD = USD_amount;
	USD_amount = 0;


	printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d",
			_20_USD, _10_USD, _5_USD, _1_USD);

	return 0;
}
