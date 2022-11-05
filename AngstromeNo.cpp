#include<iostream>
using namespace std;
int main()
{ int n,s=0,r,t;
  cout<<"Enter Number:";
  cin>>n;
  t=n;
	while(n)
	{ r=n%10;
	  s=s+r*r*r;
	  n=n/10;
	}
	cout<<"cube of no is:"<<s<<endl;
	
	if(t==s)
	{ cout<<"no is Angstrome:"<<t<<endl;
	}
	else 
	{cout<<"no is not Angstrome:"<<t<<endl;
	}
	
}
