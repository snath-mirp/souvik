#include<iostream>
using namespace std;

int main()
{
int x[5]={100,2,3,4,5};
for(int i=0;i<5;i++)
cout<<x[i]<<" ";

char name[50]="my_name";
for(int k=0;name[k]!='\0';k++)
cout<<name[k];

cout<<endl;
char name1[50];
   cout<<"Enter first name =";
   cin>>name1;
 for(int l=0; name1[l]!='\0'; l++)
 cout<<name1[l];

cout<<" "<<endl;
 return 0;
}


