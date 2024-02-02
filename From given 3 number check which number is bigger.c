/*
 ============================================================================
 Name        : From.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,c;
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("Among given three biggest number is :%d ",a);
		}
	}else if (b>c){
		printf("Among given three biggest number is :%d ",b);
	}else{
		printf("Among given three biggest number is :%d ",c);
	}
	return EXIT_SUCCESS;
}
