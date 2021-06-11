#include<iostream>
using namespace std;

int main()
{
	string str="chaitanya";
	
	for(int i=0;i<str.length();i++)
	{
		cout<<"sub string start with "<<str[i]<<endl;
		for(int j=i;j<str.length();j++)
		{
			cout<<str.substr(i,(j-i+1))<<"\n";
		}
		cout<<"----------------------------------------"<<endl;
	}
}
/*
output:

sub string start with c
c
ch
cha
chai
chait
chaita
chaitan
chaitany
chaitanya
----------------------------------------
sub string start with h
h
ha
hai
hait
haita
haitan
haitany
haitanya
----------------------------------------
sub string start with a
a
ai
ait
aita
aitan
aitany
aitanya
----------------------------------------
sub string start with i
i
it
ita
itan
itany
itanya
----------------------------------------
sub string start with t
t
ta
tan
tany
tanya
----------------------------------------
sub string start with a
a
an
any
anya
----------------------------------------
sub string start with n
n
ny
nya
----------------------------------------
sub string start with y
y
ya
----------------------------------------
sub string start with a
a
----------------------------------------

[Program finished]

*/