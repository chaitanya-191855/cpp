#include<iostream>
using namespace std;
void IS(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		int key=arr[i];
		int j=i-1;
		while( j>=0 && key<arr[j])
		{
			arr[j+1]=arr[j];
			j -=1;
		}
		arr[j+1]=key;
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
	IS(arr,n);
	for(int ele:arr)
	{
		cout<<ele<<" ";
	}
}
/*
output:
6
20 5 40 60 10 30
5 10 20 30 40 60 
[Program finished]*/