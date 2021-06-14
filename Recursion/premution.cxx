#include <iostream>
#include<string>
using namespace std;
void PrintPremution(string s,string ss,int vis[])
{
    if(ss.size()==s.size())
    {
            cout<<ss;
            return;
    }
    cout<<"\n";
    //implement logic
    for(int i=0;i<=s.size();i++)
    {
        if(vis[i]==0)
        {
        	vis[i]=1;
        	PrintPremution(s,ss+s[i],vis);
        	vis[i]=0;
        }
    }
}
int main() {
	string ss="";
	string s="abc";
	int vis[s.size()];
	for(int j=0;j<s.size();j++)
	{
		vis[j]=0;
	}
	PrintPremution(s,ss,vis);
	return 0;
}