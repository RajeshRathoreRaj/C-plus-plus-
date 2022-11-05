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
  		cout<<"Enter salary:";
  		cin>>salary;  		
	  }
	  
	void putEmployee()
	{ cout<<id<<","<<name<<","<<salary<<endl;
	}
	friend void sorting(Employee*,int);
};

void sorting(Employee *E,int n)
{ int i,j;
  Employee T;
  for(i=0;i<n;i++)
  {  for(j=0;j<(n-1)-i;j++)
  { 
     if(strcmpi(E[j].name,E[j+1].name>0))
     {
     	T=E[j];
     	E[j]=E[j+1];
     	E[j+1]=T;
	 }
  }
  }



int main()
{
	Empolyee E[3];
	int i;
	for(i=0;i<=2;i++)
	{ E[i].getEmployee();
	}
	cout<<"Unsorted Employee:"<<endl;
	for (i=0;i<=2;i++){
		E[i].putEmployee();
		sorting(E,3);
		cout<<"sorted Employee:"<<endl;
		for(i=0;i<=2;i++)
		{ E[i].putEmployee();
		}
	}	
}












