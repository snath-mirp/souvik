#include<iostream>
using namespace std;
 int main()
{
  int m1,m2,m3,m4,max,secmax;
  cout<< "Enter the values of the integers:";
  cin>> m1 >> m2 >> m3 >> m4 ;
  max=m1;secmax=m1;
    if(m2>max)
      {  secmax=max;
	max=m2;}
      else if (m2 > secmax)
        secmax=m2;
    if(m3>max)
      { secmax=max;
	max=m3;}
      else if (m3 > secmax)
        secmax=m3;
    if(m4>max)
      {  secmax=max;
	max=m4;}
	 else if (m4 > secmax)
	   secmax=m4;
    cout<<max<<endl<<secmax;
   
 return 0;
}
 


 
  

