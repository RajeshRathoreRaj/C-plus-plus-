#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int x)
{
	int i;
	for (i=0;i<n;i++){
		if(arr[i]==x)
		return i;
	}
	return -1;
}
int main()
{
	int arr[]={1,10,30,15};
	int x=30;
	int n=sizeof(arr);
	cout<<x<<"is present at index "<<search(arr,n,x);
	return 0;
	
}










