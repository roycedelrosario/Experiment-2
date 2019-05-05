#include <iostream>
#include <conio.h>
using namespace std;
 
int main()
{
   int i, t1=0, t2=1, nextterm;
   const int n=22;
 
   cout << "The Fibonacci Sequence up to 20 terms are...\n";
 
   for ( i=0; i<n; i++)
   {
      if (i<=1)
         nextterm=i;
      else
      {
         nextterm=t1+t2;
         t1=t2;
         t2=nextterm;
      }
      cout<<nextterm<< ", ";
   }
   getch();
   return 0;
}

