#include<iostream>
using namespace std;

class PrductionUnitGwalior
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
	
	
	
class PrductionUnitAgra
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
 	{ getProductionGwl();
	  getProductionAgra();
	  total=total_gwl+total_agra;
	 	 }
    
    void putTotal()
    {  putProductionGwl();
       putProductionAgra();
       cout<<"Total:"<<total<<endl;
	}};
	
int main()

{
	TotalProduction T;
	T.getTotal();
	T.putTotal();
}
	
	
	
	

