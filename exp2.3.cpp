#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	char a;
	double x, y, V;
	const double z=2.5;
	
	cout<<"Enter the value of x: "; cin>>a;
	cout<<"Enter the value of y: "; cin>>y;
	
	switch(a)
	{
		case '1':
			x=1;
			if (y>1&&y<5)
			{
				V=x*y*z;
			}
			else if (y>=5)
			{
				V=x+y/z;
			}
			else
			{
				V=x+y+z;
			}
			cout<< setprecision(2)<<fixed;
		    cout<<"V= "<<V;			
			break;		
		case '2':
			x=2;
			if (y<=5)
			{
				V=abs((x-y)/z);
			}
			else if (y>5)
			{
				V=x-sqrt(y+z);
			}
			else
			{
				V=x+y+z;	
			}
			cout<< setprecision(2)<<fixed;
		    cout<<"V= "<<V;
			break;			
		default:V=x+y+z;
		cout<< setprecision(2)<<fixed;
		cout<<"V= "<<V;
		break;		
	}
	getch();
	return 0;
}
