#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int a;
	cout<<"integer"<<" "<<"square"<<" "<<"cube"<<endl;
	for(a=0;a<=10;a++)
	{cout<<a<<setw(9)<<pow(a,2)<<setw(9)<<pow(a,3)<<endl;
	}
	
 } 
