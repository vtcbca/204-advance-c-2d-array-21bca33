/* wap to create to 3*3 matrix and cheak it is diogonal matrix or not.
date:21/2/2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j,c=0,s=0;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter value for a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	clrscr();
	printf("Matrix:\n");
	for(i=0;i<3;i++)
	{
		for( j=0;j<3;j++)
		{

			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				if(i>0 && j>0);
			   //	c=1;
			}
			if(i!=j)
			{
				if(a[i][j]==0);
			 //	s=1;
			}
		}
	}
	if(c==1 && s==1)
		printf("\n Matrix is Diogonal Matrix");
	else
		printf("\n Matrix is not Diogonal Matrix");
	getch();
}