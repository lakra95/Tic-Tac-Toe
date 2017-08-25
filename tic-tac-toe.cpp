#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
void show();
void play();
int win();
void celeb(char);
int m=0,n=0,c1=0,c2=0;
char a[11][11],p1[30],p2[30],pp1,pp2;
int main()
{
	int i,j;
	for(i=0;i<11;i++)
	{
		for(j=0;j<11;j++)
		{
			a[i][j]='\0';
		}
	}
	for(i=0;i<11;i++)
	{
		for(j=0;j<11;j++)
		{
			if(j==3 || j==7)
			{
				a[i][j]	='|';
			}	
			if(i==3||i==7)
			{
				a[i][j]='-';
			}
		}
	}
	play();
	return 0;
}
void play()
{
	int k=9,c=0,res=9;
	printf("Tic-Tac-Toe\n");
	printf("Enter 1st player name: ");
	scanf("%s",&p1);
	pp1=p1[0];
	printf("Enter 2nd player name: ");
	scanf("%s",&p2);
	pp2=p2[0];
	system("cls");
	printf("LETS PLAY!!!!");
	Sleep(1500);
	show();
	while(k--)
	{
		if(c==0)
		{
			c=1;
			printf("%s : enter your move(x,y): ",p1);	
			scanf("%d%d",&m,&n);
			if(m==1 && n==1)
			{
				if(a[1][1]=='\0')
				{
					a[1][1]=pp1;
				}
				else
				{
					c=0;
					k++;
				}
			}
			else if(m==1 && n==2)
			{
				if(a[1][5]=='\0')
				{
					a[1][5]=pp1;
				}
				else
				{
					c=0;
					k++;
				}
			}
			else if(m==1 && n==3)
			{
				if(a[1][9]=='\0')
				{
					a[1][9]=pp1;
				}
				else
				{
					c=0;
					k++;
				}
			}
			else if(m==2 && n==1)
			{
				if(a[5][1]=='\0')
				{
					a[5][1]=pp1;
				}
				else
				{
					c=0;
					k++;
				}
			}
			else if(m==2 && n==2)
			{
				if(a[5][5]=='\0')
				{
					a[5][5]=pp1;
				}
				else
				{
					c=0;
					k++;
				}
			}
			else if(m==2 && n==3)	
			{	
				if(a[5][9]=='\0')
				{
					a[5][9]=pp1;
				}
				else
				{
					c=0;
					k++;
				}	
			}
			else if(m==3 && n==1)
			{
				if(a[9][1]=='\0')
				{
					a[9][1]=pp1;
				}
				else
				{
					c=0;
					k++;
				}
			}
			else if(m==3 && n==2)
			{
				if(a[9][5]=='\0')
				{
					a[9][5]=pp1;
				}
				else
				{
					c=0;
					k++;
				}
			}
			else if(m==3 && n==3)
			{
				if(a[9][9]=='\0')
				{
					a[9][9]=pp1;
				}
				else
				{
					c=0;
					k++;
				}
			}
		}
		else if(c==1)
		{
			printf("%s : enter your move(x,y): ",p2);
			c=0;
			scanf("%d%d",&m,&n);
			if(m==1 && n==1)
			{
				if(a[1][1]=='\0')
				{
					a[1][1]=pp2;
				}
				else
				{
					c=1;
					k++;
				}
			}
			else if(m==1 && n==2)
			{
				if(a[1][5]=='\0')
				{
					a[1][5]=pp2;
				}
				else
				{
					c=1;
					k++;
				}
			}
			else if(m==1 && n==3)
			{
				if(a[1][9]=='\0')
				{
					a[1][9]=pp2;
				}
				else
				{
					c=1;
					k++;
				}
			}
			else if(m==2 && n==1)
			{
				if(a[5][1]=='\0')
				{
					a[5][1]=pp2;
				}
				else
				{
					c=1;
					k++;
				}
			}
			else if(m==2 && n==2)
			{
				if(a[5][5]=='\0')
				{
					a[5][5]=pp2;
				}
				else
				{
					c=1;
					k++;
				}
			}
			else if(m==2 && n==3)	
			{
				if(a[5][9]=='\0')
				{
					a[5][9]=pp2;
				}
				else
				{
					c=1;
					k++;
				}	
			}
			else if(m==3 && n==1)
			{
				if(a[9][1]=='\0')
				{
					a[9][1]=pp2;
				}
				else
				{
					c=1;
					k++;
				}
			}
			else if(m==3 && n==2)
			{
				if(a[9][5]=='\0')
				{
					a[9][5]=pp2;
				}
				else
				{
					c=1;
					k++;
				}
			}
			else if(m==3 && n==3)
			{
				if(a[9][9]=='\0')
				{
					a[9][9]=pp2;
				}
				else
				{
					c=1;
					k++;
				}
			}
		}
		show();
		res=win();
		if(res==11)
		{
			celeb(pp1);
			c=2;
		}
		else if(res==10)
		{
			celeb(pp2);
			c=2;
		}
	}
}
void show()
{
	int i,j;
	system("cls");
	for(i=0;i<11;i++)
	{
		for(j=0;j<11;j++)
		{
			printf("%c",a[i][j]);
		}
		printf("\n");
	}	
}
int win()
{
	int i,j;
	c1=0;
	c2=0;
	for(i=1;i<=9;i=i+4)
	{
		if(a[1][i]==pp1)
		{
			c1++;		
		}	
		else if(a[1][i]==pp2)
		{
			c2++;
		}
	}
	if(c1==3)
		return 11;
	else if(c2==3)
		return 10;
	c1=0;
	c2=0;
	for(i=1;i<=9;i=i+4)
	{
		if(a[5][i]==pp1)
		{
			c1++;		
		}	
		else if(a[5][i]==pp2)
		{
			c2++;
		}
	}
	if(c1==3)
		return 11;
	else if(c2==3)
		return 10;
	c1=0;
	c2=0;
	for(i=1;i<=9;i=i+4)
	{
		if(a[9][i]==pp1)
		{
			c1++;		
		}	
		else if(a[9][i]==pp2)
		{
			c2++;
		}
	}
	if(c1==3)
		return 11;
	else if(c2==3)
		return 10;
	c1=0;
	c2=0;
	for(i=1;i<=9;i=i+4)
	{
		if(a[i][1]==pp1)
		{
			c1++;		
		}	
		else if(a[i][1]==pp2)
		{
			c2++;
		}
	}
	if(c1==3)
		return 11;
	else if(c2==3)
		return 10;
	c1=0;
	c2=0;
	for(i=1;i<=9;i=i+4)
	{
		if(a[i][5]==pp1)
		{
			c1++;		
		}	
		else if(a[i][5]==pp2)
		{
			c2++;
		}
	}
	if(c1==3)
		return 11;
	else if(c2==3)
		return 10;
	c1=0;
	c2=0;
	for(i=1;i<=9;i=i+4)
	{
		if(a[i][9]==pp1)
		{
			c1++;		
		}	
		else if(a[i][9]==pp2)
		{
			c2++;
		}
	}
	if(c1==3)
		return 11;
	else if(c2==3)
		return 10;
	c1=0;
	c2=0;
	for(i=1;i<=9;i=i+4)
	{
		if(a[i][i]==pp1)
		{
			c1++;		
		}	
		else if(a[i][i]==pp2)
		{
			c2++;
		}
	}
	if(c1==3)
		return 11;
	else if(c2==3)
		return 10;	
	c1=0;
	c2=0;
	j=9;	
	for(i=1;i<9;i=i+4)
	{
		if(a[i][j]==pp1)
		{
			c1++;
		}
		else if(a[i][j])
		{
			c2++;
		}
		j=j-4;
	}
	if(c1==3)
		return 11;
	else if(c2==3)
		return 10;
	c1=0;
	c2=0;
}
void celeb(char x)
{
	if(x==pp1)
	{
		printf("Congragulation %s,you've won the game!!!",p1);
	}
	else if(x==pp2)
	{
		printf("Congragulation %s,you've won the game!!!",p2);
	}
	else 
	{
		printf("Match Draw!");
	}
}
