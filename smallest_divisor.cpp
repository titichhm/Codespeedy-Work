#include<bits/stdc++.h>
using namespace std;


bool prime_check(int n)
{
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			return false;
			break;
		}
	}
	return true;
}

int main()
{
	int n;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		if(n%i==0 & prime_check(i)==true)
		{
			cout<<i;
			break;
		}
	}
	return 0;
}
