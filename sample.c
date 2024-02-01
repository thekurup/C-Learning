/*
 ============================================================================
 Name        : sample.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	puts("Enter A number");
	scanf("%d",&a);
	printf("Enter A name");
	char b;
	scanf("%c",&b);
	printf("number you enter is %d",a);
	printf("number you enter is %c",b);
	return EXIT_SUCCESS;
}
