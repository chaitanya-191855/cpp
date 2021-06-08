#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int f,l,n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	f=0,l=n-1;
	while((f!=l) &(f<l))
	{
		swap(arr[f],arr[l]);
		f++;
		l--;
	}
	for(int element:arr)
	{
		cout<<element<<" ";
	}
}
