#include<iostream>
using namespace std;

//Naive Implementation
int subStrs_start_ch_naive(string text, char start){
	int count = 0,total=0;
	for(int i=0;i<text.length();i++)
	{
		for(int j=i;j<text.length();j++)
		{
			string sub_str = text.substr(i,(j-i+1));
			if(sub_str[0] == start)
			{ 
			cout<<sub_str<<endl;
			count++; 
			} 
		}
		if(count>0)
		{
		cout<<"start with  "<<start<<" :  "<<count<<endl;
		}
		total =count+total;
		count=0;
	}
	return total;
	
}

//Efficient Implementation
int subStrs_start_ch_effcient(string text, char start){
	int count = 0;
	for(int i=0;i<text.length();i++){
		if(text[i] == start)
			count += (text.length() - i); 
	}
	return count;
}
int main(){
	string text = "lpzxxvyxfu";
	char start = 'x';

	cout<<subStrs_start_ch_naive(text,start)<<endl;
	cout<<"\n";
	cout<<subStrs_start_ch_effcient(text,start);
	return 0;
}
/*
output:

x
xx
xxv
xxvy
xxvyx
xxvyxf
xxvyxfu
start with  x :  7
x
xv
xvy
xvyx
xvyxf
xvyxfu
start with  x :  6
x
xf
xfu
start with  x :  3
16

16
[Program finished]

*/