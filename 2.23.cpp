#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{int a[5];
for(int i=1;i<=5;i++)
{cin>>a[i];}
 for(int c=1;c<=4;++c)
{
  for(int d=1;d<=4;d++)
  {
    if(a[d]<a[d+1])
    {int b=a[d];
    a[d]=a[d+1];
    a[d+1]=b;}
  }
}
 cout<<a[1]<<" "<<a[5];
 
  }


