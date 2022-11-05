#include<iostream>

using namespace std;
int main()
{ 
  int a,n,i;
  do
  {cout<<endl;
  	cout<<"Main Menu 1]Even No 2]Odd No 3]Factorial 4]Exit";
  	cout<<endl;
  	cout<<"Enter Choice:?";
  	cin>>a;

  	switch(a)
  		{ case 1:
  			i=2;
  			while(i<=10)
  			{cout<<i<<" ";
  			  i=i+2;
			  }break;
			  cout<<endl;
			  
		  case 2:
		  	i=1;
		  	while(i<=9){
		  		cout<<i<<" ";
		  		i=i+2;
			  }break;
			  cout<<endl;
		  case 3:
		  	i=1;
		  	cout<<"Enter no:";
		  	cin>>n;
		  	while(n>1)
		  	{i=i*n;
		  	 n=n-1;
			  }
			  cout<<i;
			  break;
			  cout<<endl;
		 case 4:
		 	cout<<"Good bye:";
		 	break;
		 	cout<<endl;
		default :
			cout<<"Wrong Option:";
		}
		 			  }while(a!=4);
 }
 

