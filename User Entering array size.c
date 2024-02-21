/*
 ============================================================================
 Name        : User.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int  arr[100],i;
	int size;
	printf("enter array size");
	scanf("%d",&size);
	printf("enter the value");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);

	}
	printf("entered array values are");
	for(i=0;i<size;i++){
		printf("%d \t",arr[i]);
	}
}
