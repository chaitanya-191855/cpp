#include<iostream>
using namespace std;
void isprime( int n,int count)
{
	int i=2;
	if(n==1)
	{
		cout<<"not a prime";
	}
	else
	{
		while(i<n)
		{
			if(n%i==0)
			{
				cout<<"Not A Prime";
				count++;
				break;
			}
			i++;
		}
	}
	if(count==0)
	{
		cout<<"Prime";
	}
}
int main()
{
	int num,flag=0;
	cin>>num;
	isprime(num,flag);
}