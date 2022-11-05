#include<iostream>
using namespace std;
int max(int a, int b)
{
	if(a>b)
	return(a);
	else
	return(b);
}
int main()
{  int s;
   s=max(200,10);
   cout<<s<<endl;
	
}
