#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,temp;
	cout<<"enter number of elements:"<<endl;
	cin>>n;
	multiset<int,less<int>> ms;
	//input demonstration
	for(int o=0;o<n;o++)
	{
		cout<<"enter "<<"element "<<(o+1)<<":"<<endl;
		cin>>temp;
		ms.insert(temp);
	}
	
	//iterator for printing elements
	multiset<int,less<int>>::iterator it;
	for(it=ms.begin();it!=ms.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
    //removing elements from multiset
    cout<<"enter the element you want to erase:"<<endl;
    int erase_num;
    cin>>erase_num;
    int op=ms.erase(erase_num);
    cout<<"The multiset after removal of specified element becomes:"<<endl;
    multiset<int,less<int>>::iterator it2;
	for(it2=ms.begin();it2!=ms.end();it2++)
    {
        cout<<*it2<<" ";
    }
    cout<<endl;
    //lower bound,upper bound for multisets
    int lower_bound_element,upper_bound_element;
    cout<<"Enter the element for which you want to calculate the lower_bound:";
    cin>>lower_bound_element;
    cout<<*ms.lower_bound(lower_bound_element)<<endl;
    cout<<"Enter the element for which you want to calculate the upper_bound:";
    cin>>upper_bound_element;
    cout<<*ms.upper_bound(upper_bound_element)<<endl;

    //searching for elements using find and then erasing it
    int find_element;
    multiset<int,less<int>>::iterator it3;
    cout<<"enter the element you want to find:"<<endl;
    cin>>find_element;
    it3=ms.find(find_element);
    ms.erase(it3);
    multiset<int,less<int>>::iterator it4;
    cout<<"Multiset after the searched element is erased:"<<endl;
    for(it4=ms.begin();it4!=ms.end();it4++)
    {
    	cout<<*it4<<" ";
	}
	return 0;
}
