#include<iostream>
using namespace std;

int sum(int x,int y=10,int z=100)
{int s;
 s=x+y+z;
 return(s);
}

int main()
{ int s;
  s=sum(30,50,90);
  cout<<"Sum Is :"<<s<<endl;
  
  s=sum(40,70);
  cout<<s<<endl;
  
  s=sum(40);
  cout<<s<<endl;
}
