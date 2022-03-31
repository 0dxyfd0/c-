#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	for(a=1;a<=9;a++)
	{if(a==1||a==9)
	{for(b=1;b<=9;b++)
	{cout<<"*";
	}}
	else {for(b=1;b<=9;b++)
	if(b==1||b==9)
	{cout<<"*";
	}
	else {cout<<" ";
	}
	}
	cout<<endl;}
	
	for(c=1;c<=9;c++)
	{if(c==1||c==9)
	{for(d=1;d<=11;d++)
	if(d==5||d==6||d==7)
	{cout<<"*";
	}
	else {cout<<" ";
	}
	 } 
	 if(c==2||c==8)
	 {for(d=1;d<=11;d++)
	 {if(d==2||d==10)
	 {cout<<"*";
	 }else {cout<<" ";
	 }
	 }
	 }
	 if(c>=3&c<=7)
	 {for(d=1;d<=11;d++)
	 {if(d==1||d==11)
	 {cout<<"*";
	 }
	 else {cout<<" ";
	 }
	 }
	  } 
	cout<<endl;
		
	}
	for(e=1;e<=9;e++)
	{if(e>=1&e<=3)
	{for(f=1;f<=3-e;f++)
	{cout<<" ";
	}for(int k=1;k<=2*e-1;k++)
	{cout<<"*";
	}}
	if(e>3&e<=9)
	{for(int a=1;a<=5;a++)
	{if(a==3)
	{cout<<"*";
	}else {cout<<" ";
	}
	}
	}cout<<endl;}
	
	cout<<"    *    "<<endl;
	cout<<"   * *   "<<endl;
	cout<<"  *   *  "<<endl;
	cout<<" *     * "<<endl;
	cout<<"*       *"<<endl;
	cout<<" *     * "<<endl;
	cout<<"  *   *  "<<endl; 
	cout<<"   * *   "<<endl; 
	cout<<"    *    "<<endl;
	
}
