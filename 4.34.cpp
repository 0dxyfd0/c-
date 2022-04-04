#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	/*a
	double a,d=1;
	cin>>a;
	while(a!=0)
	{d=d*a;
	a--;
	}
	cout<<d;*/
	//b
	/*double n,e=1,d,f;
	cin>>n;
	for(int c=1;c<=n;c++)
	{d=1;f=c;
	while(c!=0)
	{
	d=d*c;
	c--;
	}c=f;
	e=e+1/d;
	 } 
	cout<<"e="<<e;*/
	//c
	double n,e=1,d,f,x;
	cin>>n;cin>>x;
	for(int c=1;c<=n;c++)
	{d=1;f=c;
	while(c!=0)
	{
	d=d*c;
	c--;
	}c=f;
	e=e+pow(x,f)/d;
	 } 
	cout<<"e="<<e;
 } 
