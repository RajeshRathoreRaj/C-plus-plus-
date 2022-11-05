#include<iostream>

using namespace std;

int main() {
char x;
cout<<"Enter character: ";
cin>>x;
if(x>='a' && x<='z')
{ x=x-32;
  
}
cout<<"Upper case: "<<x;

}
