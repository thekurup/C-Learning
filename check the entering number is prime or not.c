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
	int n, flag=0,i;
	printf("enter a number ");
	scanf("%d",&n);
	for (i=2;i<n/2;i++){
		if(n%i==0){
			flag=1;
			break;
		}

	}
	if(flag==0){
		printf("enter number is prime");
	}else{
		printf("enter number is not prime");
	}
	return EXIT_SUCCESS;
}
