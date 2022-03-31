/* wap to creat to 3*3 matrix and print it multipalication matrix.
date:18/02/2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],m3[3][3],m[3][3],sum,i,j,k;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter value for m1[%d][%d]:",i,j);
			scanf("\n%d",&m1[i][j]);


		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter value for m2[%d][%d]:",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	printf("\n");
	printf("\n MARTRIX:1\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",m1[i][j]);
		printf("\n");

	}

	printf("\n");
	printf("\n MATRIX:2\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",m2[i][j]);
		printf("\n");

	}


	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=0;
			for(k=0;k<3;k++)
			{
				sum=sum+m1[i][k]*m2[k][j];
				m[i][j]=sum;

			}
		}
	}
	printf("\n MULTIPALICATION MATRIX: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",m[i][j]);
		}
		printf("\n");

	}
	getch();
}
