#include<stdio.h>

int calculate_factorial(int number)
{
	if(number == 0)
	
		return 1;
	
	else
		 
		return number*calculate_factorial(number -1);
}
	
int main(int argc, char *argv[])
{
	int number;
	
	int factorial;
	
	printf("Please enter the number for calculate factorial:\n");
	
	scanf("%d", &number);
	
	factorial = calculate_factorial(number);
	
	printf("The factorial of %d is %d.\n", number, factorial);
	
	return 0;	
}