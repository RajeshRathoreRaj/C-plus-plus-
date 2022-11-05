#include<iostream>

using namespace std;

int main() {
int x[10],i,f=0,s=0,t=0,th=0;
for(i=0;i<=9;i++)
{
	//cout<<"Enter Percentage: ";
	cin>>x[i];
}
 for(i=0;i<=9;i++)
 {
 	if(x[i]>=60 && x[i]<=100)
 	{//cout<<"Pass By First Division:";
 	  f++;
	 }
	 else if(x[i]>=48 && x[i]<=59)
	 { //cout<<"Pass By Second Division:";
	 	s++;
	 }
	  else if(x[i]>=35 && x[i]<=47)
	 { //cout<<"Pass By Third Division:";
	 	t++;
	 }
	 else if(x[i]>=0 && x[i]<=34)
	 {// cout<<"Not Too Much:";
	 	th++;
	 }	 
 }
 cout<<"First "<<f<<" Second "<<s<<" Third "<<t<<" Fail "<<th;

}
