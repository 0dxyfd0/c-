#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	cin>>a;
	b=a/1000;
	c=a/100%10;
	 d=a/10%10;
	 e=a%10;
	 b=b+10-7;
	 c=c+10-7;
	 d=d+10-7;
	 e=e+10-7;
	 f=c+b*10+e*100+d*1000; 
	 cout<<f;
 } 
