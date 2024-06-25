// Two stage pipeline
#include<stdio.h>

int main()
{
	int counter =1,a,b,choice,res,ins;
	printf("Enter number 1:");
	scanf("%d",&a);
	counter = counter+1;
	printf("Enter number 2:");
	scanf("%d",&b);
	counter = counter +1;
	{
		printf("Performing addition\n");
				res = a+b;
				counter = counter+1;
	}
	printf("The cycle value is:%d\n",counter);
	printf("Enter the number of instructions:");
	scanf("%d",&ins);
	int performance_measure = ins/counter;
	printf("The performance measure is:%d\n",performance_measure);
	return 0;
}
