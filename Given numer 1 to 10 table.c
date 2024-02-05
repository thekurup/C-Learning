/*
 ============================================================================
 Name        : Given.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,i;
	printf("enter a number to see its 1 to 10 table");
	scanf("%d",&a);
	for(i=0;i<=10;i++){
		printf("%d\n",i*a);
	}
	return EXIT_SUCCESS;
}
