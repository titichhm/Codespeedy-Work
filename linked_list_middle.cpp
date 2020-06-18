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

void Middle_element(struct Node *head)  
{  
    struct Node *slow_ptr = head;  
    struct Node *fast_ptr = head;  
  
    if (head!=NULL)  
    {  
        while (fast_ptr != NULL && fast_ptr->next != NULL)  
        {  
            fast_ptr = fast_ptr->next->next;  
            slow_ptr = slow_ptr->next;  
        }  
        cout<<endl<<"The middle element is: "<<slow_ptr->data;  
    }  
}
    
int main()  
{    
    struct Node* head = NULL,*tail=NULL;  
    cout<<"Enter the number of elements"<<endl;
    int n,temp;
    cin>>n;
    cout<<"Enter each element separated by space"<<endl;
    for(int i=1;i<=n;i++)
    {
    	cin>>temp;
    	append(&head,&tail,temp);
	}
  	Middle_element(head);
    return 0;  
}
