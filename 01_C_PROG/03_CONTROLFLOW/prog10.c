#include <stdio.h>

int main()
{ 
	int number; 
	//from where we want to print the numbers
	number =1;
	printf("Numbers from 1 to 10: \n");
	
	//while loop, that will print numbers 
	//from 1 to 10
	while(number<=10)
	{
		printf("%d ",number);
		number++;
	}
	
	return 0;
}