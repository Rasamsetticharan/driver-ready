#include<stdio.h>
int isharshad(int num)
{
	int r,sum=0,n;
	n=num;
	while(num!=0)
	{
		r=num%10;
		sum=sum+r;
		num=num/10;
	}
	if(n%sum==0)
	{
		return 1;
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	if(isharshad(num))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}
