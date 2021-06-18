#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n)
{
	for(int k=0;k<n;k++)
	{
		int flag=1;
		for(int j=0;j<n-1-k;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
				flag=0;
			}
		}
		if(flag==1)
		{
			cout<<"Done!"<<"\n";
			break;
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
	BubbleSort(arr,n);
	for(int ele:arr)
	{
		cout<<ele<<" ";
	}
}
/*
output:
5
2 10 5 8 7
Done!
2 5 7 8 10
[Program finished]*/
