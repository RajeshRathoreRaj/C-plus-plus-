#include<iostream>

using namespace std;
int main()
{int i,j;
	for(i=1;i<=5;i=i=i+1)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j;
		}
		for(j=j-2;j>=1;j--)
		{ cout<<j;
		}
		cout<<endl;
	}
/*
1
121
12321
1234321
123454321
*/

}

