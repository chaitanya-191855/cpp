#include<iostream>
using namespace std;
int dp[1000000];
int fibo(int n)
{
	if(n<=1)
	{
		return n;
	}
	if(dp[n]!=-1)
	{
		return dp[n];
	}
	return dp[n]=fibo(n-1)+fibo(n-2);
}
int main()
{
	int num;
	cin>>num;
	for(int i=0;i<num+1;i++)
	{
		dp[i]=-1;
	}
	cout<<fibo(num)<<endl;
	for(int i=0;i<num+1;i++)
	{
		cout<<dp[i]<<" ";
	}
	return 0;
}
	
	/*
	output:
6
8
-1 -1 1 2 3 5 8
[Program finished]
   */