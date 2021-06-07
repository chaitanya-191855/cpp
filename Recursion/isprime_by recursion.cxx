#include<iostream>
using namespace std;
// By using Recursion
bool isprime_Recur(int n,int i=2)
{
	if(n<=2)
	{
		if(n==2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if((i*i)>n)
	{
		return true;
	}
	if(n%i ==0)
	{
		return false;
	}
	isprime_Recur(n,i+1);
}
int main()
{
	int num;
	cin>>num;
	cout<<isprime_Recur(num);
}