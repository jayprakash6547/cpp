#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  Node *link=NULL;
};
Node *start;

void ins_beg()
{ if(start==NULL)
  { Node *newnode=new Node; 
     if(newnode==NULL)
      {
          cout<<"Memory Not Available!"<<endl;
      }
      else
      { int info;
        cout<<"Enter data for Linked List : ";
        cin>>info;
        newnode->data=info;
        start=newnode;
      }
  }
  else
  { Node *newnode=new Node; 
     if(newnode==NULL)
      {
          cout<<"Memory Not Available!"<<endl;
      }
      else
      { int info;
        cout<<"Enter data for Linked List : ";
        cin>>info;
        newnode->data=info;
        newnode->link=start;
        start=newnode;
      }
  }
}

void ins_end()
{ if(start==NULL)
   { Node *newnode=new Node; 
     if(newnode==NULL)
      {
          cout<<"Memory Not Available!"<<endl;
      }
      else
      { int info;
        cout<<"Enter data for Linked List : ";
        cin>>info;
        newnode->data=info;
        start=newnode;
      }
   }
   else
   { Node *newnode=new Node; 
     if(newnode==NULL)
      {
          cout<<"Memory Not Available!"<<endl;
      }
      else
      { int info;
        cout<<"Enter data for Linked List : ";
        cin>>info;
        newnode->data=info;
        Node *temp=start;
        while(temp->link!=NULL)
        {temp=temp->link;}
        temp->link=newnode;
      }
   }
}

void ins_loc()
{  Node *newnode=new Node;
   if(newnode==NULL)
   {
     cout<<"Memory Not Available!"<<endl;
   }
   else
   { int info,x;
     cout<<"Enter data for Linked List : ";
     cin>>info;
     cout<<"Enter data of the node : ";
     cin>>x;
     newnode->data=info;
     Node *temp=start;
      while(temp->data!=x)
      { temp=temp->link;} 
      newnode->link=temp->link;
      temp->link=newnode;
   }
}

void del_beg()
{ if(start==NULL)
  {
    cout<<"Already Empty! "<<endl;
  }
  else
  { Node *temp=start;
    start=start->link;
    delete temp;
  }
}

void del_end()
{ if(start==NULL)
  {
    cout<<"Already Empty! "<<endl;
  }
  else
  { Node *temp=start;
    Node *prv=start;
    while(temp->link!=NULL)
    { prv=temp;
      temp=temp->link;
    }
    if(prv->link==NULL)
    {start=NULL;}
    prv->link=NULL;
    delete temp;
  }
}
void del_loc()


void display()
{  if(start==NULL)
  {
    cout<<"Linked List is Empty! "<<endl;
  }
  else 
  { Node *temp=start;
    while(temp->link!=NULL)
    { cout<<temp->data<<"->";
      temp=temp->link;
    } 
    cout<<temp->data<<endl;
  }
}

int main()
{ int choice,n=1;
  start=NULL;
  while(n==1)
  { cout<<"----------------------- "<<endl;
    cout<<"Singly Linked List Menu "<<endl;
    cout<<"----------------------- "<<endl<<endl;
    cout<<"1. Insertion at Beginning"<<endl;
    cout<<"2. Insertion at End"<<endl;
    cout<<"3. Insertion at Given Location"<<endl;
    cout<<"4. Deletion at Beginning"<<endl;
    cout<<"5. Deletion at End"<<endl;
    cout<<"6. Deletion of Given Data"<<endl;
    cout<<"7. Print the List"<<endl;
    cout<<"8. Exit "<<endl;
    cin>>choice;
    switch(choice)
    { case 1:ins_beg();
             break;
      case 2:ins_end();
             break;
      case 3:ins_loc();
             break;
      case 4:del_beg();
             break;
      case 5:del_end();
             break;
//       case 6:del_loc();
//              break;
      case 7:display();
             break;
      case 8:exit(0);
             break;
    }
   cout<<"Do you want to continue (Press 1) : ";
   cin>>n;
  }
    return 0;
}
