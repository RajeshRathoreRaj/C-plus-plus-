#include<iostream>
using namespace std;

class Employee
{
	private:
		int id;
		char name[30];
		long salary;

    public:
    	void getEmployee()
    	{
    		cout<<"id:";
    		cin>>id;	
    		cout<<"name:";
    		cin>>name;
    		cout<<"salary:";
    		cin>>salary; 		
		}
		
	void putEmployee()
	 {
	 	cout<<id<<","<<name<<","<<salary<<endl;
	 }
 
   void bonus(long amt=0)
   {
   	salary=salary+amt;
   }
};

int main(){
	Employee E1,E2;
	E1.getEmployee();
	E1.putEmployee();
	E1.bonus(2000);
	E1.putEmployee();
	
	E2.getEmployee();
	E2.putEmployee();
	E2.bonus();
	E2.putEmployee();
	}
   
   
   
   
   
   
 
