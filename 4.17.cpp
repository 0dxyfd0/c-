#include<iostream>
#include<cmath>
using namespace std;
int main()
{int counter=1,number,largest,a[10];
while(counter<=10)
{cin>>a[counter];cout<<"number:"<<a[counter]<<endl;
if(counter>=2)
{if(a[counter-1]>a[counter]){
int d=a[counter-1];
a[counter-1]=a[counter];
a[counter]=d;}
}

cout<<"largest:"<<a[counter];counter++;}
  }  
