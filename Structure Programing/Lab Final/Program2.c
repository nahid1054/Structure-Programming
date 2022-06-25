//Write a program that take two integers as input and print the result of addition, subtraction, multiplication & division.
#include<stdio.h>
int main(){
	int num1,num2,add,sub,mul,div;
	
	printf("Enter the value of num1:");
	scanf("%d",&num1);
	
	printf("Enter the value of num2:");
	scanf("%d",&num2);
	
	add=num1+num2;
	sub=num1-num2;
	mul=num1*num2;
	div=num1/num2;
	
	printf("Addition=%d\n",add);
	printf("Subtraction=%d\n",sub);
	printf("Multiplication=%d\n",mul);
	printf("Division=%d",div);
	
	return 0;
}
