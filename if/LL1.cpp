#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node*link=NULL;
};
Node*head;
void ins_beg()
{
	if(head==NULL){
		Node*newnode=new Node;
		if(newnode==NULL)
		{
			cout<<"space is running out!"<<endl;
		}
		else
		{int my;
		cout<<"enter data of linked list :";
		cin>>my;
		newnode->data=my;
		head=newnode;
		}
	}
	else
	{Node *newnode=new Node;
	if(newnode==NULL)
	{
		cout<<"space is running out!"<<endl;
	}
		else
		{int my;
		cout<<"enter data of linked list :";
		cin>>my;
		newnode->data=my;
		newnode->link=head;
		head=newnode;
		}
	}
}

void ins_end()
{
	if(head==NULL){
		Node*newnode=new Node;
		if(newnode==NULL)
		{
			cout<<"space is running out!"<<endl;
		}
		else
		{int my;
		cout<<"enter data of linked list :";
		cin>>my;
		newnode->data=my;
		head=newnode;
		}
	}
	 else{
			Node*newnode=new Node;
		if(newnode==NULL)
		{
			cout<<"space is running out!"<<endl;
		}
		else
		{int my;
		cout<<"enter data of linked list :";
			cin>>my;
			newnode->data=my;
			Node*temp=head;
			while(temp->link!=NULL)
			{temp=temp->link;}
			temp->link=newnode;
		}
	}
}

void display()
{Node *temp=head;
while(temp->link!=NULL)
{
	cout<<temp->data<<" ";
	temp=temp->link;
}
cout<<temp->data<<endl;
}

int main()
{int choice,n=1;
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
 cout<<"6.Deletion at Given Dta"<<endl;
 cout<<"7.Print the List"<<endl;
 cout<<"Exit "<<endl;
 cin>>choice;
 switch(choice)
 {case 1:ins_beg();
 		 break;
  case 2:ins_end();
  		 break;
//  case 3:ins_loc();
//  		 break;
//  case 4:del_beg();
//  		 break;
//  case 5:del_end();
//  		 break;
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

