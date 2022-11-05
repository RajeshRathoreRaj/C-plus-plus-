#include<iostream>
using namespace std;
int main()
{ int n,p=1,r,s=0;
  cout<<"Enter Number:";
  cin>>n;
   while(n){
   r=n%2;
   s=s+(p*r);
   p=p*10;
   n=n/2; 
} cout<<s;
 }
