#include<iostream>
using namespace std;

class student

{
	private:
		int rollno;
		char name[30];
	
	public:
		void getStudent()
		{
			cout<<"Enter Roll no:";
			cin>>rollno;
			cout<<"Enter name:";
			cin>>name;
		}
		void putStudent()
		{
			cout<<rollno<<","<<name<<endl;
		}
};


class BSC:public student
{
	private:
		int p,c,m;
		
		
	public:
		void getBSC()
		{ 
          getStudent();
	      cout<<"Enter Physics M:";
		  cin>>p;
		  
		  cout<<"Enter Chemistry M:";
		  cin>>c;
		  
		  cout<<"Enter Maths M:";
		  cin>>m;
	}
	
	void putBSC()
	{  	putStudent();
		cout<<p<<","<<c<<","<<m<<endl;
	}};
		
	
int main()

{
	BSC s; // by Default 

	s.getBSC();	
	s.putBSC();
}











