#include<bits/stdc++.h>
using namespace std;

int BS(int a[],int i,int l,int h)
{
   if(h<=l)
      return (i>a[l])?(l+1):l;
    int m=(l+h)/2;
   if(i==a[m])
      return m+1;
   if(i>a[m])
      return BS(a,i,m+1,h);
      return BS(a,i,l,m-1);
}
void BIS(int a[],int n) 
{
   int i,j,k,l,pos;
   for(i=1;i<n;i++) 
   {
      j=i-1;
      pos=a[i];
      l=BS(a,pos,0,j);
      while(j>=l)
	  {
        a[j+1]=a[j];
        j--;
      }
      a[j+1]=pos;
   }
}

int main()
{
   int size;
   cin>>size;
   int a[size];
   for(int i=0;i<size;i++)
   {
   		cin>>a[i];
   }
   int n=sizeof(a)/sizeof(a[0]);
   BIS(a,n);
   cout<<"Array after binary insertion sort"<<endl;
   for(int i=0;i<n;i++)
   {
      cout<<a[i]<<" ";
   }
   return 0;
}
