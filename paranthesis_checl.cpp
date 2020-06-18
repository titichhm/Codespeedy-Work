#include<bits/stdc++.h>
using namespace std;

bool balanaced(string s)
{
	int count=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='{' || s[i]=='(' || s[i]=='[')
		{
			count++;
		}
		else if(s[i]=='}' || s[i]==')' || s[i]==']')
		{
			count--;
		}
		
		if(count<0)
		{
			return false;
		}
	}
	if(count==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	string s;
	cin>>s;
	if(balanaced(s)==true)
	{
		cout<<"String is balanced";
	}
	else
	{
		cout<<"String is not balanced";
	}
	return 0;
}
