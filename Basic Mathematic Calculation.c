/*
 ============================================================================
 Name        : Basic.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,option,result;
	printf("enter two number ");
	scanf("%d%d",&a,&b);
	printf("1 for addition \n2 for subtraction \n3 for multiplication \n4 division ");
	scanf("%d", &option);
	if(option == 1){
		result = a+b;

	}else if (option == 2){
		result = a-b;

	}else if ( option == 3){
		result = a*b;

	}else if(option == 4){
		result = a/b;

	}else{
		printf("This option is not available ,choose from 1 to 4 option  ");
	}
	printf("\n result is : %d",result );
	return EXIT_SUCCESS;
}
