#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	double a,b,c,d=0,n=1,e=0;
	while(n!=0)
	{
	cout<<"Enter miles driven(-1 to quit)£º";cin>>a;
	cout<<"Enter gallons used:";cin>>b;
	cout<<"MPG this trip:";cout<<setiosflags(ios::fixed)<<setprecision(6)<<a/b<<endl;
	d=d+a;
	e=e+b;
	cout<<"Total MPG:";cout<<setprecision(6)<<fixed<<d/e<<endl;cout<<endl;
	
	}
}
