#include<iostream>
using namespace std;

class Base
{
	public:
		Base()
	{ cout<<"Base Version:"<<endl;
	}
};
class Derive: public Base
{
	public:
		Derive()
		{ cout<<"Derive Version:"<<endl;
		}
};

int main()
{
	Derive D1;
}




