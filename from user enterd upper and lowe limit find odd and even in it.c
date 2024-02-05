/*
 ============================================================================
 Name        : from.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int lower ,upper, i;
	printf("enter lower limit");
	printf("enter upper limit");
	scanf("%d%d",&lower,&upper);
	for(i=lower;i<=upper;i++){

		if(i%2==0){
			printf("is an even number %d\n",i);


		}else{
			printf("is an odd number %d\n",i);

		}

	}


	return EXIT_SUCCESS;
}
