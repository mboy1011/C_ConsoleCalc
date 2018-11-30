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
int input(int c);

int main(){
	char lp;
	do{
		int c,res;
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
				res = input(1);		
				printf("Result: %d\n",res);
				break;
			case 2:
				res = input(2);
				printf("Result: %d\n",res);
				break;
			case 3:
				res = input(3);
				printf("Result: %d\n",res);
				break;
			case 4: 
				res = input(4);
				printf("Result: %d\n",res);
				break;
			default:
				printf("Invalid Choice!\n");
				break;
		}	
	printf("Do you want to try again? [Y/n] ");
	scanf(" %c",&lp); // PUT whitespace before if you are using Characters unlike all the others.
	printf("\n");
	}while(lp == 'Y' || lp == 'y');
}

int input(int c){
	int res,a,b;
	printf("1st Digit: ");
	scanf("%d",&a);
	printf("2nd Digit: ");
	scanf("%d",&b);
	if(c==1){
		res = add(a,b);
		return res;
	}else if(c==2){
		res = sub(a,b);
		return res;
	}else if(c==3){
		res = mul(a,b);
		return res;
	}else if(c==4){
		res = qot(a,b);
		return res;
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
