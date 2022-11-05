#include<iostream>

using namespace std;

int main() {
int x[5];
for(int i=0;i<=4;i++)
{   cout<<"Enter Value Array: "<<endl;
	cin>>x[i];

}
for(int i=0;i<=4;i++)
{
	if(x[i]%2==0){
		cout<<x[i]<<",";
		
	}
}

}
