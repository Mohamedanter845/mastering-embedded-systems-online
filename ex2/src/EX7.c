/*
 * EX7.c
 *
 *  Created on: Jul 16, 2023
 *      Author: Anter
 */


#include <stdio.h>

void main()
{
	int i, n, sum=1;

	printf("Enter an integer: ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&n);

	if(n>=0)
	{
		for(i=1;i<=n;i++)
				sum*=i;
		printf("Factorial = %d",sum);
	}
	else if(n<0)
		printf("Error!!! Factorial of negative number doesn't exist.");
}
