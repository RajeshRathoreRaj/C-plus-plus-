#include<iostream>
using namespace std;

void Table(int n)
{ int i=1,t;
  while(i<=10)
  { t=n*i;
    cout<<n<<"*"<<i<<"="<<t<<endl;
    i++;
  }
  cout<<endl;
}
int main()
{ 
  Table(4);
  Table(9);
}
