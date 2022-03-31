#include<iostream>
using namespace std;
int main()
{double a,b,c,d,e,n;
while(n!=0){

cout<<"Enter acout number £¨or -1 to quit£©:";cin>>a;
cout<<"Enter beginning balance:";cin>>b;
cout<<"Enter total charges:";cin>>c;
cout<<"Enter total credits:";cin>>d;
cout<<"Enter credit limit:";cin>>e;
cout<<"New balance is"<<b+c-d<<endl;
if(b+c-d>e)
{cout<<"Account:"<<a<<endl;
cout<<"credit limit:"<<e<<endl;
cout<<"Balance:"<<b+c-d<<endl;
cout<<"credit limit Exceeded"<<endl;
cout<<endl;}}
 } 
