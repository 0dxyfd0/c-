#include<iostream>
using namespace std;
int main()
{int a;
cin>>a;
for(int b=1;b<=a;b++)
{for(int c=1;c<=a;c++)
{
	if(b==1||b==a)
	{cout<<"*";
	}
	
else	{if(c==1||c==a)
	{cout<<"*";
	} else {cout<<" ";
	}
	}
}
cout<<endl;}
  }  
