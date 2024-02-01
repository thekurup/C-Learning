/*
 ============================================================================
 Name        : sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,c;

	printf("Enter Two Number");
	scanf("%d%d", &a,&b);
	c =  a +  b;
	printf("sum of two number is %d", c);

	return EXIT_SUCCESS;
}
