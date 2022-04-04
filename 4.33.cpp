#include<iostream>
using namespace std;
int main()
{int a,b,c;
cin>>a>>b>>c;
if(a>b&&a>c)
{if(a*a==b*b+c*c)
{cout<<"可以组成直角三角形";  
}else {cout<<"不可以组成直角三角形"; 
}}
if(b>a&&b>c)
{if(b*b==a*a+c*c)
{cout<<"可以组成直角三角形"; 
}else {cout<<"不可以组成直角三角形"; 
}


 } 
 if(c>a&&c>b)
{if(c*c==b*b+a*a)
{cout<<"可以组成直角三角形"; 
}else {cout<<"不可以组成直角三角形";
}
	
 } }
