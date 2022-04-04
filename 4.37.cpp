#include<iostream>
using namespace std;
int main()
{
	int a,d,e;double b;
	cin>>a>>b;
	for(int c=1;c<=75;c++)
	{if(c==1)
	{d=a;
	}
	
	e=d;
	d=d*(1+b);
	cout<<c<<" "<<"\t";cout<<d<<" "<<"\t";cout<<d-e<<"\t";cout<<endl;
	}
 } 
