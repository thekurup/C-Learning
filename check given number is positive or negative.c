/*
 ============================================================================
 Name        : check.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num ;
	printf("enter a number");
	scanf("%d",&num);
	if(num>0){
		printf("the value is positive");
	}else{
		printf("the value is negative");
	}
	return EXIT_SUCCESS;
}
