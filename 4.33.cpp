#include<iostream>
using namespace std;
int main()
{int a,b,c;
cin>>a>>b>>c;
if(a>b&&a>c)
{if(a*a==b*b+c*c)
{cout<<"�������ֱ��������";  
}else {cout<<"���������ֱ��������"; 
}}
if(b>a&&b>c)
{if(b*b==a*a+c*c)
{cout<<"�������ֱ��������"; 
}else {cout<<"���������ֱ��������"; 
}


 } 
 if(c>a&&c>b)
{if(c*c==b*b+a*a)
{cout<<"�������ֱ��������"; 
}else {cout<<"���������ֱ��������";
}
	
 } }
