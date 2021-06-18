#include<iostream>
using namespace std;
void SS(int arr[],int n)
{
	for(int k=0;k<n-1;k++)
	{
		int min_index=k;
		for(int j=k+1;j<n;j++)
		{
			if(arr[j]<arr[min_index])
			{
				min_index=j;
			}
			swap(arr[k],arr[min_index]);
		}
	}			
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	SS(arr,n);
	for(int ele:arr)
	{
		cout<<ele<<" ";
	}
}
/*
output:
5
2 10 5 8 7
2 5 7 8 10
[Program finished]*/