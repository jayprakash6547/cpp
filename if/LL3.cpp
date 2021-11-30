#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertathead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n; 
}
void insertattail(node*&head,int val){
    node*n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
bool search(node* head,int key){
	node*temp=head;
	while(temp!=NULL){
		if(temp->data==key){
			return true;
		}
		temp=temp->next;
	}
	return false;
}
void deleteathead(node*&head){
	node*todelete=head;
	head=head->next;
	delete todelete;
}
void deletion(node*&head,int val){
	if(head==NULL){
		return;
	}
	if(head->next==NULL){
		deleteathead(head);
			return;
	}
	if(head=NULL){
		return;
	}
	if(head->next==NULL){
		deleteathead(head);
		return;
	}
	node*temp=head;
	while(temp->next->data!=val){
		temp=temp->next;
	}
	node*todelete=temp->next;
	temp->next=temp->next->next;
	delete todelete;
}








int main(){
int choice,n=1;
head=NULL;
while(n==1)
{cout<<"------------------------------------------"<<endl;
 cout<<"Singly Linked List Menu "<<endl;
 cout<<"------------------------------------------"<<endl<<endl;
 cout<<"1. Insertion at Beginning"<<endl;
 cout<<"2. Insertion at End"<<endl;
 cout<<"3. Insertion at Given Location"<<endl;
 cout<<"4.Deletion at Beginning"<<endl;
 cout<<"5.Deletion at End"<<endl;
 cout<<"6.Deletion at Given Data"<<endl;
 cout<<"7.Print the List"<<endl;
 cout<<"Exit "<<endl;
 cin>>choice;
 switch(choice)
 {case 1:ins_beg();
 		 break;
  case 2:ins_end();
  		 break;
  case 3:ins_loc();
  		 break;
  case 4:del_beg();
  		 break;
  case 5:del_end();
  		 break;
//  case 6:del_loc();
//  		 break;
  case 7:display();
  		 break;
  case 8:exit(0);
   		 break;
 }
 cout<<"Do you wnat to continue (press 1) :";
 cin>>n;
}
 
    
    return 0;
}


