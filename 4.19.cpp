#include<iostream>
using namespace std;
int main()
{int a[10],k=1;
while(k<=10)
{
	cin>>a[k];
	if(k>=2)
	{if(a[k-1]>a[k])
	{int d=a[k-1];
	a[k-1]=a[k];
	a[k]=d;
	}
	}
	k++;
	
}
for(int k=2;k<=10;k++)
{if(a[k-1]>a[k])
	{int c=a[k-1];
	a[k-1]=a[k];
	a[k]=c;
	}
}
cout<<a[9]<<" "<<a[10]; } 
