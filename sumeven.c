#include<stdio.h>
int main(void)
{
	int n,sum=0,r;
	printf("Enter a value : ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r%2==0)
		{
			sum=sum+r;
		}
		n=n/10;
	}
	printf("Sum of even digits = %d\n",sum);
	return 0;
}

