#include<stdio.h>

void Patterns(int iNo)
{
	int iCnt=0;
	for(iCnt=-iNo;iCnt<=iNo;iCnt++)
	{
		printf("%d*\t",iCnt);
	}
}
int main()
{
	int iValue = 0;
	printf("Enter the NO:");
	scanf("%d",&iValue);
	Patterns(iValue);
	return 0;
}
