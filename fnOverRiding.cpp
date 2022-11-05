#include<iostream>
using namespace std;

class Base
{
	public:
		void show()
		{
			cout<<"Base Version:"<<endl;
		}
};

class Derive : public Base
{
	public:
		void show()
		{ Base::show();
		  cout<<"Derive Version:"<<endl;
		}
};

int main()
{
	Derive D;
	D.show();
}







