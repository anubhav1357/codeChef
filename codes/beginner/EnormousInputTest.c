#include<stdio.h>
#include<limits.h>
int main(void)
{
	unsigned long int n,k,i;
	unsigned long int tobescanned;
	int counter=0;	
	scanf("%lu %lu",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%lu",&tobescanned);
		if(tobescanned%k==0)
		{
			counter++;
		}
		
	}
	printf("%d",counter);
	return 0 ;	
}
