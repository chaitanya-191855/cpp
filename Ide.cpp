#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int happynum(int num)
{
    int r, res=0;
    while(num>0)
    {
        r=num%10;
        num=num/10;
        res=res+(r*r);
    }
    num=res;
    if(num>9)
    {
        happynum(num);
    }
    else
    {
        return num;
    }
}
int main() 
{
    int n, x;
    cin>>n;
    x=happynum(n);
    if(x==1)
    {
        cout<<"Happy number";
    }
    else{
        cout<<"not a happy number";
    }
}

