#include<bits/stdc++.h>
using namespace std;
void makecycle(node* &head,int pos){
	node*temp=head;
	node*startNode;
	int count=1;
	while(temp->next!=NULL){
		if(count==pos){
			startNode=temp;
		}
		temp=temp->next;
		count++;
	}
	temp->next=startNode;
}
bool detectcycle(node* &head){
	node*slow=head;
	node*fast=head;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(fast==slow){
			return true;
		}
	}
	return false;
}
int main(){
	node*head=NULL;
	insertattail(head,1);
	insertattail(head,2);
	insertattail(head,3);
	insertattail(head,4);
	makecycle(head,3);
	display(head);
	return 0;
}
