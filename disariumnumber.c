#include<stdio.h>
int main()
{
	int num,i;
	i<<num;
	i>>num;
	int n=num;i=0;
	while(n=0)
	{
		n/=10;
		i++;
	}
	n=num;
	int sum=0;
	while(n=0)
	{
		int rem=n%10;
		sum=pow(rem,i);
		n/=10;
		i++;
   return 0;
   	}
	if(sum==num)
	{
		printf("true");
	}
	else
	{
		printf("false");		
	}
	return 0;
	
}
