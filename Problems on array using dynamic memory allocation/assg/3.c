#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


int DivEven(int arr[],int);

int main()
{
	int iSize=0,iCnt=0;
	int *p=NULL;

	printf("Enter the Element:");
	scanf("%d",&iSize);

	p=(int*)malloc(iSize*sizeof(int));

	if(p==NULL)
	{
		printf("Unable to allocate memory:");
		return -1;
	}

	printf("Enter the no:");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

	DivEven(p,iSize);

	free(p);

	return 0;

}

int DivEven(int arr[],int iLength)
{
	int iCnt=0;
	if((arr==NULL) || (iLength<0))
	{
		return 0;
	}
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((arr[iCnt]%2)==0)
		{
			if(arr[iCnt]%5==0)
			{
				printf("%d is Even and divisible by 5\t\n",arr[iCnt]);
			}
			else 
				printf("%d  is Even but not divisible 5 \n",arr[iCnt]);
		}
	}
}
