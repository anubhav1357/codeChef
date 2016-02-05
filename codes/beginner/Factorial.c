#include<stdio.h>


int pow5(long long unsigned int);


int main(void)
{
	int count2,count5;	
	unsigned int i,t,majorcount2=0,majorcount5=0,numberofzeroes;
	scanf("%u",&t);
	long long unsigned int n[t],j;
	for(i=0;i<t;i++)
	{
		scanf("%llu",&n[i]);
		for(j=1;j<=n[i];j++)
		{
			count5=pow5(j);
			majorcount5=majorcount5+count5;
		}
	numberofzeroes=majorcount5;
	printf("%u\n",numberofzeroes);
	majorcount5=0;
	}
	return 0 ;	
}


//calculate the power of 5 in n
int pow5(long long unsigned int n)
{
	int count = 0;
	while(n%5==0)
	{
		n=n/5;
		count++;
	}
	return count;
}
