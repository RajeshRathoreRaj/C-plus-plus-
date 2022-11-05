#include<iostream>

using namespace std;

int main() {
char x;
cout<<"Enter character: ";
cin>>x;
if((x>='a' && x<='z')  || x>='A' && x<='Z')
if(x=='A' || x=='a' || x=='E' || x=='e' ||x=='i' || x=='I' || x=='o'|| x=='O'|| x=='u' || x=='U')
{cout<<"Vowel: "<<x<<endl;
}
else
{
	cout<<"Consonent: "<<x;
}
else
{
	cout<<"Invalid Alaphabet...";
}

}
