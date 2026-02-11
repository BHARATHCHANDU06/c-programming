#include<stdio.h>
int main()
{
	int you,date;
	printf("Enter the Rating of you and date : \n");
	scanf("%d %d",&you,&date);
	if(you<=2||date<=2)
	{
		printf("0");
	}else
	{
		printf("1");
	}
	return 0;
}
