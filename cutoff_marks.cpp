#include<iostream>
using namespace std;
int main()
{
  int mA,mB,mC;
  cout<< "Enter the values of the cutoff marks";
  cin>>mA>>mB>>mC;
  if((mA>mB)&&(mB>mC)) {
    cout<<"The cut off marks are valid\n";
  
  int mark;
  cout<< "Enter your mark\n";
  cin>> mark ;
  if((mark>=85)&&(mark<=100))
  cout<<"grade A";

  else if((mark>=70)&&(mark<=84))
   cout<<"grade B";
  
  else if((mark>=55)&&(mark<=69))
   cout<<"grade C";
  
  else
    cout<<"grade D";}
  
  else{cout<<"The cut off marks are not valid";}
  
  return 0;
}
 
  
  
  
