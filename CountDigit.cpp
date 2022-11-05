#include<iostream>
using namespace std;
int main()
{ int n,count=0;
  cout<<"Enter Number:";
  cin>>n;
  while(n)
  { n=n/10;
    count=count+1;
     
  }
 cout<<count;
}
        

