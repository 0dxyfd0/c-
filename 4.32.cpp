#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
 cin>>a>>b>>c;
 if(a+b>c&&a+c>=b&&b+c>=a&&fabs(a-b)<c&&fabs(a-c)<b&&fabs(b-c)<a)
 {cout<<"可以表示三角形的三条边"; 
 }
 else{cout<<"不可以表示三角形的三条边";
 } 
 } 
