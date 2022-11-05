#include<iostream>
using namespace std;

int fact(int n)
{
	int i=1;
	while(n>=1){
		i=n*i;
		n=n-1;
		
	}
	return(i);
}
int main()
{ int m;
  m=fact(5);
  cout<<m;
}
