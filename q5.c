//WAP to display matrix multiplication.

#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter number of rows: ");
	scanf("%d",&x);
	
	printf("Enter number of columns: ");
	scanf("%d",&y);
	
	int arr1[x][y],i,j,mul[3][3];
	printf("Input elements in the matrix: \n");
	for(i=0;i<x;i++)
	{
		for (j=0;j<y;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	
	int arr2[x][y];
	printf("Input elements in the matrix: \n");
	for(i=0;i<x;i++)
	{
		for (j=0;j<y;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			mul[i][j]=arr1[i][j]*arr2[i][j];
		}
		
	}
	printf("The First Matrix is: \n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	printf("The SecondMatrix is: \n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	printf("The MULTIPLICATION Matrix is: \n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
