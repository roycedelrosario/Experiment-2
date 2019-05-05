#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
  int waterdemand=35, galloncharge=20; 
  char unpaidbalance;            
  const double consumptioncharge=1.10;
  double previousbill, currentbill, gallons, bill;        
      
  cout<<"What is your previous meter reading?: ";
  cin>>previousbill;   

  cout<<"What is your current meter reading?: ";
  cin>>currentbill;   
     
  cout<<"Did you pay your previous bill? ('Y' or 'N'): ";
  cin>>unpaidbalance;        

  gallons=currentbill-previousbill;

  if ((unpaidbalance== 'Y')||(unpaidbalance== 'y'))       
  {
   bill=(consumptioncharge*gallons)+waterdemand;
  }
  else
  {
   bill=(consumptioncharge*gallons)+waterdemand+galloncharge; 
  }
  cout<< setprecision(2)<<fixed;
  cout<<"Your Water Bill"<<" is "<<bill<<" Pesos";    
  
  getch ();  
  return 0;
}
