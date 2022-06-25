//Write a program that takes two float number as input and show the result of addition and subtraction.*/
#include<stdio.h>
int main(){
	float num1,num2,add,sub;
	printf("Enter the num1:");
	scanf("%f",&num1);
	
	printf("Enter the num2:");
	scanf("%f",&num2);
	
	add=num1+num2;
	sub=num1-num2;
	
	printf("Addition:%.3f\n",add);
	printf("Subtraction:%.3f",sub);	
	
	
    return 0;
	
}
