#include<iostream> 
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d,e;
	cout<<"Input three different integers:"<<endl; 
	cin>>a>>b>>c;
	d=max(a,b);
	e=min(a,b);
	cout<<"Sum is "<<a+b+c<<endl;;
	cout<<"Average is "<<(a+b+c)/3<<endl;
	cout<<"Product is "<<a*b*c<<endl;
	cout<<"smallest is "<<min(e,c)<<endl;
	cout<<"Largest is "<<max(d,c)<<endl;
	
	
}
