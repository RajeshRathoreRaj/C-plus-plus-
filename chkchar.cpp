#include<iostream>

using namespace std;

int main() {
	
char x;
cout<<"Enter Character: ";
cin>>x;
if(x>='A' && x<='Z')
cout<<"Upeer Case";
else if(x>='a' && x<='z')
cout<<"Lower case";
else if(x>='0' && x<='9')
cout<<"Digit";
else
cout<<"Special";



}
