#include<iostream>
#include<string.h>
using namespace std;


class Employee
{ private:
	int id;
	char name[30];
	long salary;
	
  public:
  	void getEmployee()
  	{
  		cout<<"Enter id:";
  		cin>>id;
  		cout<<"Enter name:";
  		cin>>name;
  		cout<<"salary:";
  		cin>>salary;
	  }
	  
	void getEmployee(int id,char name[30],long salary)
	{
	  this->id=id;
	  strcpy(this->name,name);
	  this->salary=salary;
	}
	
	void putEmployee()
	{ cout<<"id:"<<id<<","<<"name:"<<name<<","<<"salary:"<<salary<<endl;
	}
};

int main()
 { Employee E1,E2;
    E1.getEmployee();
    E1.putEmployee();
    
    E2.getEmployee(200,"AR",90000);
    E2.putEmployee();
}




