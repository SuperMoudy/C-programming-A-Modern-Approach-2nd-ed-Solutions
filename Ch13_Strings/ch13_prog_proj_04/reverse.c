/*
 * reverse.c
 *
 *  Created on: Dec 18, 2019
 *      Author: SuperMoudy
 */

// Programming Project 4: Echo command-line arguments in reverse order

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i;
	for(i = argc - 1; i > 0; i--)
	{
		printf("%s ", argv[i]);
	}
	return 0;
}
