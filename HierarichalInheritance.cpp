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
	protected:
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
	}
	};
	
	class Ba:public student
	{
		private:
			int h,e,g;
	
	    public:
	    	void getBa()
	    	{ getStudent();
	    	  cout<<"Enter History M:";
	    	  cin>>h;
	    	  cout<<"Enter Economics M:";
	    	  cin>>e;	    	  
	    	  cout<<"Enter Geography M:";
	    	  cin>>g;	
			}
			
		void putBa()
		{ 	putStudent();
		    cout<<h<<","<<e<<","<<g<<endl;
		}
		  };
	
	
int main()
{
	cout<<"BSC:"<<endl;
	BSC S1;
	S1.getBSC();
	S1.putBSC();
	
	
	cout<<"Ba:"<<endl;
	Ba S2;
	S2.getBa();
	S2.putBa();
		
}











