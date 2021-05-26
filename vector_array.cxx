#include<iostream>
//#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    //vector declare
    vector<int> ve;
    
    int i,x,arr[]={1,2,8,9,4,7,11,10};
    //  x=*(&arr+1)-arr;
    //   cout<<x<<endl;
    for(int i=0;i<(*(&arr+1)-arr);i++)
    {
    cout<<arr[i]<<" ";
    }//1 2 8 9 4 7 11 10 0 0
    
    int *max;
    max=max_element(arr,arr+10);//(array,array+no of elements)
    
    cout<<*max;// 11
    
    ve.push_back(500); //500
    ve.assign(5,10);      // 10 10 10 10 10
    ve.emplace_back(40); // 10 10 10 10 10 40
    
    vector<int>:: iterator it=ve.begin();
    // it store the address of vector begining element
    
    for(vector<int>:: iterator it=ve.begin();it!=ve.end();it++)
    {
        cout<<*(it)<< " ";  // // 10 10 10 10 10 40
    }
    
    for(auto it:ve)
    {
        cout<<it<<" ";
    }
    
    it=find(ve.begin(),ve.end(),40);// finding any element in vector
    
    cout<<it - ve.begin()<<endl;
  
    return 0;
}