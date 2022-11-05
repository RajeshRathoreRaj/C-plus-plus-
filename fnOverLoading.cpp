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
		void show(int x)
		{ Base::show();
		  cout<<"Derive Version:"<<x<<endl;
		}
};

int main()
{
	Derive D1;
	D1.show(9);
}







