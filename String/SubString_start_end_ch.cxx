#include<iostream>
using namespace std;
string printSubString(string str,char start,char end)
{
	string largest_substr=" ";
	for(int i=0;i<str.length();i++)
	{
		for(int j=i;j<str.length();j++)
		{
			string sub_str=str.substr(i,(j-i+1));
			if(sub_str[0]==start && sub_str[sub_str.length()-1]==end)
			{
				cout<<sub_str;	
//	 for print the largest sub string which start & end with give char

				if(sub_str.length() > largest_substr.length())
					largest_substr = sub_str;
				cout<<endl;
			}
		}
	}
	return largest_substr;
}
	
int main()
{
	string str="chaitanya";
	char start='a';
	char end='a';
	cout<<printSubString(str,start,end);
}

/* 
output:
a
aita
aitanya
a
anya
a
aitanya//(largest substring)
[Program finished]*/