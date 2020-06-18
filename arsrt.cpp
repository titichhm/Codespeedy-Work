#include <bits/stdc++.h>
using namespace std;

int bs(int l,int h,int x,int n,int a[])
{
    if(h>=l)
    {
        int m=l+(h-l)/2;
        if((m==0 || x>a[m-1]) &&a[m]==x)
        {
            return m;
        }
        if(x>a[m])
        {
            return bs((m+1),h,x,n,a);
    	}
		return bs(l,(m-1),x,n,a);
    }
    return -1;
}

void srt(int n1,int n2,int a1[],int a2[])
{
    int temp[n1],vstd[n1];
    int index=0,b=0;
    for(int o=0;o<n1;o++)
    {
        temp[o] = a1[o];
        vstd[o] = 0;
    }
    sort(temp,temp+n1);
    
    for(int i=0;i<n2;i++)
    {	
        b=bs(0,n1-1,a2[i],n1,temp);
        if(b==-1)
		{
        	continue;
		}
        for(int j=b;(j<n1 && temp[j]==a2[i]);j++)
        {
            a1[index++]=temp[j];
            vstd[j]=1;
        }
    }
    for(int k=0;k<n1;k++)
    {
        if(vstd[k]==0)
        {
            a1[index++]=temp[k];
    	}
	}
}

int main()
{
    int n1,n2;
    cout<<"Enter number of elements for 1st array:"<<endl;
    cin>>n1;
    cout<<"Enter number of elements for 2nd array:"<<endl;
    cin>>n2;
    
    int a1[n1];
    int a2[n2];
    cout<<"enter array 1 elements:";    
    for(int i=0;i<n1;i++)
    {
    	cin>>a1[i];
	}
    cout<<"enter array 2 elements:";
    for(int j=0;j<n2;j++)
    {
        cin>>a2[j];
    }
    
    cout<<endl<<"The sorted array becomes:";
    srt(n1,n2,a1,a2);
    for(int u=0;u<n1;u++)
    {
    	cout<<a1[u]<<" ";
	}
    return 0;
}
