#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int size,i,j,k,n,arr[5];
    size=*(&arr+1)-arr;//array size
    cout<<size;
    cin>>n;//no of elements to be insert
    cout<<"enter the array element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    while(n<size)
    {
        int pos,index,ele;
        cout<<"enter the pos"<<endl;
        cin>>pos;
        cout<<"enter the element"<<endl;
        cin>>ele;
        index=pos-1;
        for(int j=n-1;j>=1;j--)
        {
            arr[j+1]=arr[j];
        }
        arr[index]=ele;
        n++;
       for(int k=0;k<n;k++)
       {
        cout<<arr[k]<<" ";
       }
    }
    return 0;
}