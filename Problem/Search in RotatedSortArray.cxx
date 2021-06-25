#include<iostream>
using namespace std;
int Search(int key,int arr[],int low,int high)
{
	while(low<=high)
	{
		int mid=(low+high)/2;//(low+(high-low))>>1;
		if(arr[mid]==key)
		{
		   return mid;
		 }
		 if(arr[mid]<arr[0])
		 {
		   if(key>=arr[0] || key<arr[mid])
		   {
		   	high=mid-1;
		   }else
		   {
		   	low=mid+1;
		   }
		 } else
		 {
		   if(key>arr[mid] || key<arr[0])
		   {
		   	low=mid+1;
		   }
		   else
		   {
		   	high=mid-1;
		   }}     
     }	
     return -1;
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
	int key;
	cin>>key;
	int ind=Search(key,arr,0,n-1);
	cout<<ind;
}
/*

8
50 60 100 3 9 12 25 36
90
-1
[Program finished]
*/