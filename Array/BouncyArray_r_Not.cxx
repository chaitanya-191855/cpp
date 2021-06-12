#include<iostream>
using namespace std;
bool bouncyArray_r_Not(int arr[],int n)
{
	int h=0,l=0;
	if(arr[0]>arr[1])
	{
		h++;
	}else{
		l++;
	}
	for(int j=1;j<n-1;j++){
		if(h==1 && arr[j]<arr[j+1]){
			h=0;
			l=1;
		}else if(l==1 && arr[j]>arr[j+1]){
			h=1;
			l=0;
		}else{
			return false;
		}
	}
	return true;
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
	cout<<bouncyArray_r_Not(arr,n);
	return 0;
}