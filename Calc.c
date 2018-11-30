/*
 * Simple C Terminal Calculator
 *
 * Author: mboy1011
 * */

#include <stdio.h>
#include <stdlib.h>

/* Declared Function */
int mul(int a, int b);
int sub(int a, int b);
int qot(int a, int b);
int add(int a, int b);

int main(){
	int c;
	int a,b;
	printf("+==============+\n");
	printf("|  Calculator  |\n");
	printf("|    1. Add    |\n");
	printf("|    2. Sub    |\n");
	printf("|    3. Mul    |\n");
	printf("|    4. Div    |\n");
	printf("+==============+\n");
	printf("Choose: ");
	scanf("%d",&c);
	switch(c){
		case 1:
			printf("1st Number: ");
			scanf("%d",&a);	
			printf("2nd Number: ");
			scanf("%d",&b);
			int res = add(a,b);
			printf("Result: %d",&res);
			break;
		default:
			return(0);
	}
}

int mul(int a, int b){
	return a*b;
}

int qot(int a, int b){
	return a/b;
}

int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}
