#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
 cin>>a>>b>>c;
 if(a+b>c&&a+c>=b&&b+c>=a&&fabs(a-b)<c&&fabs(a-c)<b&&fabs(b-c)<a)
 {cout<<"���Ա�ʾ�����ε�������"; 
 }
 else{cout<<"�����Ա�ʾ�����ε�������";
 } 
 } 
