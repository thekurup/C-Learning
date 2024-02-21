/*
 ============================================================================
 Name        : Sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,arr[100],i,sum;
	printf("enter the limit");
	scanf("%d",&limit);
	for(i=0;i<limit;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<limit;i++){
		sum=sum+arr[i];
	}
	printf("%d",sum);
}
