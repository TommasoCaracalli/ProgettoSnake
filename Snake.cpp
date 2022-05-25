#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
void stampa(char m[][10],int Xsnake,int Ysnake,int Xmela,int Ymela);
using namespace std;
int main()
{
	char m[10][10],lettera;
	int Xsnake=1,Ysnake=1,Xmela,Ymela;
	srand(time(NULL));
	for(int i=0; i<10; i++)
		for(int j=0; j<10; j++)
		{
		m[i][j]=' ';
		if(i==0 || i==9 || j==0 || j==9	)
		m[i][j]='*';	
		}
		Xmela=rand()%7+1;
		Ymela=rand()%7+1;
		stampa(m,Xsnake,Ysnake,Xmela,Ymela);
		while(true)
		{
			system("cls");
			stampa(m,Xsnake,Ysnake,Xmela,Ymela);
			cout<<"\nInserisci una lettera : ";
			cin>>lettera;
			switch(lettera)
			{
				case 'w':
					if(Xsnake>=2)
					Xsnake--;
				case 's':
					if(Xsnake<=7)
					Xsnake++;
				case 'a':
					if(Ysnake>=2)
					Ysnake--;
				case 'd':
					if(Ysnake<=7)
					Ysnake++;
				
			}
			if(Xsnake==Xmela && Ysnake==Ymela)
			{
					Xmela=rand()%7+1;
		Ymela=rand()%7+1;	
			}
		}
}
void stampa(char m[][10],int Xsnake,int Ysnake,int Xmela,int Ymela)
{
		for(int i=0; i<10; i++)
		{
			cout<<endl;
			for(int j=0; j<10; j++)
			{
				if(i==Xmela && j==Ymela)
				cout<<'o';
				else
				if(i==Xsnake && j==Ysnake)
				cout<<'x';
				else
				cout<<m[i][j];	
			}
		}
			
}
