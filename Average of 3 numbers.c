/*
 ============================================================================
 Name        : Average.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,c,avg;
	printf("enter the three numbers");
	scanf("%f%f%f",&a,&b,&c);
	avg=(a+b+c)/3;
	printf("Average of 3 number is : %f",avg);
	return EXIT_SUCCESS;
}
