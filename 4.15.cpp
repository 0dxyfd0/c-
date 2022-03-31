#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a,b,c=1;
	while(c!=0) 
	{
	cout<<"Enter sale in dollars (-1 to end):";cin>>a;
	 cout<<"Salary is:$";
	 cout<<setiosflags(ios::fixed)<<setprecision(2)<<a*0.09+200<<endl;
	 cout<<endl;}
}
