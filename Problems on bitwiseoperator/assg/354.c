#include<stdio.h>
#include<stdbool.h>


typedef unsigned int UINT;
bool CheckBit(UINT iNo, int iPos1, int iPos2);
int main()
{
	UINT iValue = 0;
	int iValue1 = 0, iValue2 = 0, iRet = 0;

	printf("Enter the NO:-");
	scanf("%d",&iValue);

	printf("Enter the First Position:-");
	scanf("%d",&iValue1);

	printf("Enter the Second Position:-");
	scanf("%d",&iValue2);

	iRet = CheckBit(iValue,iValue1,iValue2);

	if(iRet==true)
	{
		printf("ON:");
	}
	else
	{
		printf("OFF:");
	}
	return 0;
}
bool CheckBit(UINT iNo, int iPos1, int iPos2)
{
	UINT iRes = 0, iMask1 = 0x00000001, iMask2 = 0x00000001;
	UINT iMask = 0;

	iMask1 = iMask1<<(iPos1-1);
	iMask2 = iMask2<<(iPos2-1);

	iMask = iMask1 | iMask2;

	iRes = iNo & iMask;

	if(iRes==iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/* 0000 0000 0000 0000 0000 0000 0000 1010
    
*/
