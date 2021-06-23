// Quick Sort  ->Pivot
#include<iostream>
#include<vector>
using namespace std;
int parition(int low,int up,int arr[])
{
    int pivot=arr[low];
    int start=low,end=up;
    while(start<end)
    {
        while(arr[start]<=pivot)
        {
            start++;
        }
        while(arr[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            swap(arr[start],arr[end]);
        }
    }
    swap(arr[low],arr[end]);
    return end;
}

void QuickSort(int low,int up,int arr[])
{
    if(low<up)
    {
        int loc=parition(low,up,arr);
        QuickSort(low,loc-1,arr);
        QuickSort(loc+1,up,arr);
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
    QuickSort(0,n-1,arr);
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
    
}

/*
input  :: 
  7
  10 12 2 3 8 15 11
  
 output::
 2 3 8 10 11 12 15

*/