#include<stdio.h>
int main()
{
	int nahid,galib,joy;
	
	
	printf("Enter the age of Nahid:");
	scanf("%d",&nahid);
	printf("Enter the age of Galib:");
	scanf("%d",&galib);
	printf("Enter the age of Joy:");
	scanf("%d",&joy);
	
	
	if(nahid<galib && nahid<joy)
	{
		printf("Nahid is younger");
	}
	else if(joy<galib && joy<nahid)
	{
		printf("Joy is younger");
	}
	
	else{
		
		printf("Galib is younger");
	}
	
	
	
	return 0;
	
	
}
