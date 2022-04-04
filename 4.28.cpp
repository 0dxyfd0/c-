#include<iostream>
using namespace std;
int main()
{
	int a,b;
	for(a=1;a<=8;a++)
	{
		for(b=1;b<=8;b++)
		{if(a%2==0)
		{cout<<" "<<"*"; 
		}
		else {cout<<"*"<<" ";
		}
		}cout<<endl;
	}
 } 
