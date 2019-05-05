#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main() 
{
	float time, price;
	string package;
	
	cout<<"Choose Package(A,B,C): \n";
    cout<<"Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr.\n";
    cout<<"Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr.\n";
 	cout<<"Package C: For P1995/mo of unlimited access is provided.\n";
 	cout<<"\n";
 	cout<<"What Package? "; cin >> package;
 	
    if ((package=="A")||(package=="a")||(package=="B")||(package=="b")||(package=="C")||(package=="c"))
    {
    	cout<<"The number of hours: ";
        cin>>time;
        if (time<=720)
        {
        	if ((package=="A")||(package=="a"))
        	{
        		if (time>10)
        		{
        			price=995+(time-10)*20;
				}
				else
				{
					price=995;
				}
			}
			else if ((package=="B")||(package=="b"))	
			{
				if (time>20)
				{
					price=1495+(time-20)*10;
				}
				else
				{
					price=1495;
				}
			}
			else if ((package=="C")||(package=="c"))
			{
				if (time<=720)
				{
					price=1995;
				}
				else
				{
					cout<<"Invalid Package";
				}
				
		
			}
			
		}
	}
	cout << "Price: " << price << " Pesos";
	getch();
	return 0; 
}

