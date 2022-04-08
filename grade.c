#include <stdio.h>

int main()
{
	int mark = 0;

	printf("Please enter your mark > ");
	scanf("%d",&mark);

	if(mark>=70&&mark<=100)
	{
		printf("\nYour grade is A\n");
	}
	else if(mark>=50&&mark<=69.9)
	{
		printf("\n your grade is B\n");
	}
	else if(mark>=40&&mark<=49.9&&!(mark<=39.9))
	{
		printf("\nYour grade is C\n");
	}
	else{
		printf("\nYour grade is F\n");
	}
}
