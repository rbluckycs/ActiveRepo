#include<stdio.h>


int main()
{

int LoopVar,PrimeNo,Counter;
LoopVar=PrimeNo=Counter=0;


printf("Enter The no to check wheather it's prime or not");
scanf("%d",&PrimeNo);


for(LoopVar=1;LoopVar<=PrimeNo;LoopVar++)
{
	if(PrimeNo%LoopVar==0)
	Counter++;
}

	if(Counter==2)
	printf("%d is a prime no", PrimeNo);
	else
	printf("%d is not a prime no", PrimeNo);


//printf("Modular Val by 1= %d, Val by 7=%d, val by 3=%d",PrimeNo%1, PrimeNo%9, PrimeNo%3);

return 0;
}
