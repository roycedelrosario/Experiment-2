#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
	int counter, i;
	counter=1;
	
	for (i=1; i<=10; i++)
	{
		cout<<counter<<", ";
		counter ++;
	}
	for (counter=12; counter<=30;)
	{
		cout<<counter<<", ";
		counter +=2;
	}
	getch();
	return 0;
}
