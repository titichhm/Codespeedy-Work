#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;
	Node(int x){
		data=x;
		next=NULL;
	}
};

void append(struct Node** head_ref,struct Node** tail_ref,int new_data)
{
	struct Node* new_node =new Node(new_data);
	if(*head_ref==NULL)
		*head_ref=new_node;
	else
		(*tail_ref)->next=new_node;
	*tail_ref=new_node;
}
  
int Count(struct Node* head) 
{ 
    if (head == NULL)
    {
    	return 0;
	}    
    return(1+Count(head->next)); 
} 

int main() 
{ 
    struct Node* head = NULL,*tail=NULL; 
  	cout<<"Enter the number of elements"<<endl;
    int n,temp;
    cin>>n;
    cout<<"Enter each element seperated by space"<<endl;
    for(int i=1;i<=n;i++)
    {
    	cin>>temp;
    	append(&head,&tail,temp);
	}
  
    cout<<endl<<"Number of nodes is : "<<Count(head);
    return 0; 
}
