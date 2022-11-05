#include<iostream>
using namespace std;

int sum (int x,int y,int z)
{ int s=x+y+z;
  return (s);
}
int main()
{ int a,b,c,s;
  cout<<"Enter Value:";
  cin>>a>>b>>c;
  s=sum(a,b,c);
  cout<<s<<endl;
}
  
