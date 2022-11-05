#include<iostream>
using namespace std;
int main()
{int i,x[5],max;
	for(i=0;i<=4;i++)
	{
		cout<<"Enter No: ";
		cin>>x[i];
	}
	
     for(i=0;i<=4;i++)
     {
       if(x[i]>max){
       	max=x[i];
 
	   }	 
	 
	 	 }
  cout<<max;
}
