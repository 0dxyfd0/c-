#include<iostream>
using namespace std;
int main()
{int a,b,n=1;
while(n!=0) 
{cout<<"Enter hours worked (-1 to end):" ;cin>>a;
cout<<"Enter hourly rate of the employee($00.00):";b=10;cout<<b<<endl;
if(a<=40)
{cout<<"Salary is $"<<a*b<<endl;
}
else {cout<<"Salary is $"<<400+(a-40)*15<<endl;
}
cout<<endl;}
}
