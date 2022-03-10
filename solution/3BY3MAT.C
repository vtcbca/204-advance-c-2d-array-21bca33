/* wap to creat to 3*3 matrix and print the sum it.
date:18/02/2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],sum[3][3],i,j;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter value for m1[%d][%d]:",i,j);
			scanf("\n%d",&m1[i][j]);


		}
	}
	printf("\n MARTRIX:1");
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter value for m2[%d][%d]:",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	printf("\n MATRIX:2");
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",m2[i][j]);
		}
		printf("\n");
	}
	// logic of sum
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(m1[i][j]==m2[i][j])
				 sum[i][j]=m1[i][j]+m2[i][j];
		}
		printf("\n");
	}
	printf("\n sum of two number:");
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",sum[i][j]);
		printf("\n");
       }

	getch();
}

