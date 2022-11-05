#include<iostream>
using namespace std;
class Bank
{ private:
	int acno;
	char name[30];
	long balance;
	
  public:
    void openAccount()
	{ cout<<"Enter acno:";
	  cin>>acno;
	  cout<<"Enter name:";
	  cin>>name;
	  cout<<"Enter balance:";
	  cin>>balance;
		}	
	 void showAccount()
	 { cout<<"Account:"<<acno<<endl;
	   cout<<"Name:"<<name<<endl;
	   cout<<"Balance:"<<balance<<endl;
	 }
	 
	 void deposit()
	 { int amt;
	   cout<<"Enter deposite amt:";
	   cin>>amt;
	   balance=balance+amt;
	   cout<<"balance:"<<balance;
	 }
	 
	 void withDraw()
	 {
	 	int amt;
	   cout<<"Enter amt withdraw:";
	   cin>>amt;
	   if(balance>amt){
	   balance=balance-amt;
	   cout<<"balance"<<balance;}
	   else{
	   	cout<<"less amount Tranjection Failed:";
	    cout<<"balance"<<balance<<"amount"<<amt;
	   }
	 }
	 int search(int);	
};


int Bank::search(int an)
 {
    if(an==acno){
	showAccount();
    return(1);
 }return(0);
}
 int main()
 	{
	int i,found,an,ch;
 	Bank c[3];
 	for(i=0;i<=2;i++)
	 {   cout<<"Enter Detail:"<<endl;
 		c[i].openAccount();
	 }
	 
	 do{
	 	cout<<"\nMain Menu:"<<endl;
	 	cout<<"1:show all account\n 2:search Acno:\n 3:Deposit\n 4:withdraw\n 5:Exit\n";
	 	cout<<"Enter Choice:";
	 	cin>>ch;
	 	
	 	switch(ch)
		 {
	 		case 1:
	 			for(i=0;i<=2;i++)
	 			{
	 				c[i].showAccount();
	 					
				 }
			 break;
				 
		    case 2:
		    	cout<<"Enter acno u Want to Search:";
		    	cin>>an;
		    	found=0;
		    	for(i=0;i<=2;i++)
		    	{ found=c[i].search(an);
                  if(found){
                  	break;
					  }
				  }
			
				  	if(!found){
				  		cout<<"Acno no not Exit:"<<an<<endl;
					  }
					  break;
					  
		    case 3:
		        cout<<"Enter acount an u Want to Deposit account:";
		       	cin>>an;
				found=0;
				for(i=0;i<=2;i++)
				{found=c[i].search(an);
				 if(found)
				 {
				 	c[i].deposit();
				 	break;
					 }
					   }
					 if(!found)
					 {
					 	cout<<"Acno Not Exit:"<<an<<endl;
					 }break;
					 
		    case 4:
		    	cout<<"Enter acno no an u Want to Withdraw amount:";
		       	cin>>an;
		       	found=0;
		       	for(i=0;i<=2;i++)
		       	{ found=c[i].search(an);
		       	  if(found){
		       	  	c[i].withDraw();
		       	  	break;
					 }
					   }
				  if(!found){
				  	cout<<"Account No Not Found:"<<an<<endl;
				  }
				  break;
	
   			case 5:
   				cout<<"Have a nice day:";
   				break;
   			
   			default:
   				cout<<"wrong option:";
   				break;		
   				
}}
		while(ch!=5);
	
}
































