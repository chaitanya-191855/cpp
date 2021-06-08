#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,flag=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int j=0;j<n-1;j++)
	{
		if(arr[j]>arr[j+1])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"array sorted order";
	}
	else
	{
		cout<<"array unsorted order";
	}
	return 0;
}
