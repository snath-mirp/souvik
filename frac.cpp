#include<iostream>
using namespace std;
int main() 
{	
	int N ,M ,O;
	cout << "enter a number: ";
	cin >> M;
	N = M*M;
	O = N++;	
	cout << "the number is: " << O << endl;
	return 0;
}
