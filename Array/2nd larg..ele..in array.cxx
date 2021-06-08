#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size,*max,large,ele,res=-1;
	cout<<"array size :";
	cin>>size;
	int arr[size];
	cout<<"enter the elements in the array:"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	max=max_element(arr,arr+size);
	ele=*max;
	for(int j=0; j<size; j++)
        {
                if(arr[j]==ele)
                {
                        large=j;
                        break;
                }
        } 
	for(int i=0;i<size;i++)
	{
		if(arr[i] != arr[large])
		{
			if(res== -1)
			{
				res=i;
			}
			else if(arr[i]>arr[res])
			{
				res=i;
			}
		}
	}
	if(res==-1)
	{
		cout<<-1;
	}
	else
	{
		cout<<arr[res];
	}
		return 0;
}
