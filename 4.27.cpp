#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int a,b,d=0,e=0;
cin>>a;
while(a!=0)
{b=a%10;
	a=a/10; 
	d=b*pow(2,e)+d;
	
	e++;
	
 } cout<<d;	}
