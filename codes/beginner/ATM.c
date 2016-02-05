#include<stdio.h>

int main(void)
{
	int amnt;
	float blnce;
	scanf("%d %f",&amnt,&blnce);
	if(amnt>blnce&&amnt>0)
	{
		printf("%.2f",blnce);
	}
	else if(amnt%5!=0&&amnt>0)
	{
		printf("%.2f",blnce);
	}
	else if(amnt>0)
	{
		blnce=blnce-(amnt+0.5);
		printf("%.2f",blnce);		
	}
return 0;
}
