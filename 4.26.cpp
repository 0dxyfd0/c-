#include<iostream>
using namespace std;
int main()
{
	int a,c,b,d=0;
	cin>>a;
	b=a;
	while(a!=0)
	{c=a%10;
	a=a/10;
	d=d*10+c;
	
	}
	if(b==d)
	{cout<<"����Ϊ������"; 
	}
	else {cout<<"���ǻ�����"; 
	}
 } 
