#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0,num;
    num=n;
    while(num!=0)
    {
        num=num>>1;
        count++;
    }
    if(count%2!=0)
    {
        count++;
    }
    count=count/2;
    int ev,od,even=1,odd=2;
    while(count!=0)
    {
        ev=n & even;
        od=n & odd;
        if(((ev==even)&(od==odd))|((ev==0)&(od==0)))
        {
            even=even<<2;
            odd=odd<<2;
        }
        else
        {
            n=n^even;
            n=n^odd;
            even=even<<2;
            odd=odd<<2;
        }
        count--;
    }
    cout<<n;
}