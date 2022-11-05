#include<iostream>
using namespace std;

class company
{
	private:
		char name[30];
		char ho[30];
		
	public:
		void getCompany()
		{
			cout<<"Enter Company Name:";
			cin>>name;
			
			cout<<"Enter HeadOffice City:";
			cin>>ho;
		}
		
		void putCompany()
		{ cout<<name<<","<<ho<<endl;
		}};
		
		
class PrductionUnitGwalior: public virtual company
{ protected:
		long total_gwl;
  public:
  	void getProductionGwl()
	  {  cout<<"Enter Total Prodution Gwalior:";
	     cin>>total_gwl;
	  }
	void putProductionGwl()
	{ cout<<total_gwl<<endl;
	}};
	
class PrductionUnitAgra:public virtual company
{
	protected:
		long total_agra;
		
	public:
	  void getProductionAgra()
	  {  cout<<"Enter Total Prodution Agra:";
	     cin>>total_agra;
	  }	
      void putProductionAgra()
	{ cout<<total_agra<<endl;
	}};

class TotalProduction: public PrductionUnitGwalior,public PrductionUnitAgra
{ private:
	long total;
	
 public:
 	void getTotal()
 	{ getCompany();
      getProductionGwl();
      getProductionAgra();
      total=total_gwl+total_agra;
	 	 }
      
    void putTotal()
    { putCompany();
      putProductionGwl();
      putProductionAgra();
      cout<<"Total:"<<total<<endl;
	}};
int main()

{
	TotalProduction T;
	T.getTotal();
	T.putTotal();
}




















