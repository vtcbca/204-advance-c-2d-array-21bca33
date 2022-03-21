/* WA menudriven program to perform following task using diferent function catagory.
1.prime number.
2.palindrom number.
3.reverse number.
4.print even num till n.
5.
6.exit.
date:21/03/2022*/
#include<stdio.h>
#include<conio.h>
void prime();
void palindrom(int,int);
int reverse();
int even (int,int);
int menu();

void main()
{
	int c,x,y;
	char ch;
	clrscr();
	do
	{
		c=menu();
		switch(c)
		{
			case 1 :
				 prime();
				 break;

			case 2 :
				printf("\n Enter two value:");
				scanf("%d%d",&x,&y);
				palindrom(x,y);
				break;

			case 3 :
				c= reverse();
				printf("\n reverse is:%d",c);
				break;

			case 4 :
				printf("Enter two value:");
				scanf("%d%d",&x,&y);
				c=even(x,y);
				printf("\n even of %d and %d is %d ",x,y,c);
				break;

			case 5 :

			case 6 :
				exit(0);
			default :
				printf("invalid choice:");
				printf("\n\n\t do you want to continue ? ( yes= y/Y , no=n/N:");
				flushall();
				scanf("%c",&ch);
		}
	}while(ch=='y' || ch=='Y');
	getch();
}
		int menu()
		{
			int choise;
			printf("\n MENU");
			printf("\n___________________________\n");
			printf("\n1.prime number.\n 2. palindrom number.\n 3.reverse number.\n 4.print even number till n. 5. \n 6. exit \n");
			printf("\n Enter your choise:");
			scanf("%d",&choise);
			return(choise);
		 }
			void prime()
			{
				int x,y,sum;
				printf("\nEnter value for x:");
				scanf("%d",&x);
				for(y=1;x<y;y++)
				{
					if(x%y==0);
					sum++;
				}
				if(sum==2)
					printf("\n %d is x prime number", x);
				else
					printf("\n %d is not prime number",x);
			}

			void palindrom (int x,int y)
			{
				int k=0,d;
				printf("\n Enter any number:\n\t");
				scanf("%d",&x);
				y=x;
				while(x<0)
				{
					d=x%10;
					k=d+k*10;
					x=x/10;
				}
				if(y==k)
					printf("\n this is palindrom number");
				else
					printf("\n this is not palindrom number");
			}

			int reverse()
			{
				int x,y,c=0;
				printf("\n Enter a number to reverse:");
				scanf("%d",&x);
				while(x>0)
				{
					y=x%10;
					x=x/10;
					c=c*10+y;
				}
				printf("%d",c);
			}

			int even (int x, int y)
			{
			}



