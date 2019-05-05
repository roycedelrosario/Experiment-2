#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;
    if (n<=0)
    {
    	cout<<"Thank you!";
    	
	}
	else
	{
	    for (int i = 1; i <= n; ++i) 
		{
        sum += i;        
        }
    cout << "Sum of all whole numbers from 1 to " << n << " is "<< sum;
    }
    getch();
    return 0;
}


