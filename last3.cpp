#include<iostream>
using namespace std;
int main() 
{	
	int N ,M ,O ,P ,Q;
	cout << "enter a number: ";
	cin >> N;
	M = N%10;
	O = (N%100)/10;
	P = (N%1000)/100;
	Q = (M+O+P);
	cout << "sum of last digit: " << Q << endl;
	return 0;
}
