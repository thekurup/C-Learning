/*
 ============================================================================
 Name        : Swaping.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,temp;
	printf("Enter Two Numbers");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("value after swapped a : %d",a);
	printf("value after swapped b : %d",b);
	return EXIT_SUCCESS;
}
