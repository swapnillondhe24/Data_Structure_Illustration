#include <iostream>
#include <conio.h>
using namespace std;
class node
 { 
 public:
       int  data;
       node *next;
       node()   
		{ 
			next=NULL;
		}
        node(int x)   
		{
			next=NULL;
	 		data=x;
		}
  
  };
class linkedlist
 {   node *head; 
   public:
     linkedlist()
      { head=NULL;
      }
     ~linkedlist(); 
   
     void create();
     void print();
     int count();
     int search(int x);
     void insertf(int x);
     void insertr(int x);
     void Deletef( );
     void Deleter();
 };

 linkedlist:: ~linkedlist()
     { node *p;
      if(head!=NULL)
	{
	while(head->next!=head)
	 { p=head->next;
	   head->next=p->next;
	   delete p;
	 }
	delete head;
	head=NULL;
       }
    }

void linkedlist:: create()
  { int x,n,i;
    node *p;
    cout << "\n Enter no of nodes : ";
    cin>>n;
    for(i=0;i<n;i++)
     { cout<<"\n Next Data : ";
       cin >> x;
       if(head==NULL) // inserting the first node
	 {
	  head=new node(x);
	  head->next=head;
	 }
       else
	{ p=new node(x);
	  p->next=head->next;
	  head->next=p;
	  head=p;
	}
     }
  }

 void linkedlist::print()
 { cout<<"\n Data stored in the linked list : ";
   node *p;
   if(head==NULL)
     return;
   p=head->next;
   do {
       cout<<"  "<<p->data;
       p=p->next;
      }while(head->next != p);
 }

int linkedlist::count()
 { int i=0;
   node *p;
   if(head==NULL)
    return 0;
   p=head->next;
   do
     {
      i++;
      p=p->next;
     }while(head->next != p);
   return i;
 }

int linkedlist::search(int x)
 { int i=0;
   node *p;
   if(head==NULL)
    return -1;
   p=head->next;
   do
    { i++;
      if(p->data==x)
	return i;
      p=p->next;
   }while(head->next != p);
  return -1;
 }

void linkedlist::insertf(int x)
 { node *p;
  if(head==NULL) 
   {
    head=new node(x);
    head->next=head;
   }
  else
  { p=new node(x);
    p->next=head->next;
    head->next=p;
  
  }

}

void linkedlist::insertr(int x)
 { node *p;
  if(head==NULL) 
   {
    head=new node(x);
    head->next=head;
   }
  else
  { p=new node(x);
    p->next=head->next;
    head->next=p;
    head=p;
  }
}
 void linkedlist::Deletef()
  {  node *p;
     if(head->next==head)
      { delete head;
	head=NULL;
      }
     else
      { p=head->next;
	head->next=p->next;
	delete p;
      }
  }

 void linkedlist::Deleter()
   { node *p;
     if(head->next==head)
      { delete head;
	head=NULL;
      }
     else
      { p=head->next;
	while(p->next != head) 
	 p=p->next;
	p->next=head->next;
	delete head;
	head=p;
      }
  }

int main()
 { int op,x,loc;
   linkedlist l,l1,l2;
   system("cls");
   do
   { cout<<"\n\n1)Create\n2)Print\n3)Insert(front)\n4)insert(rear)";
     cout<<"\n5)Delete(front)\n6)Delete(rear)\n7)length";
     cout<<"\n8)Search\n9)Quit";
     cout<<"\nEnter your Choice : ";
    cin >> op;
    switch(op)
      {  case 1: l.create();break;
	case 2: l.print();break;
	case 3: cout<<"Enter the data  :"; cin>>x;
		l.insertf(x);break;
	case 4: cout<<"Enter the data  :"; cin>>x;
		l.insertr(x);break;
	case 5: l.Deletef();break;
	case 6: l.Deleter();break;
	case 7: cout << "Length of the linked list = "<<l.count();
		break;
	case 8: cout << "Enter element to be searched : ";
		cin >> x;
		loc=l.search(x);
		if(loc==-1)
		  cout << "\n Element not found ";
		else
		 cout << "\n Found at location : "<<loc;
		break;
	case 9:
		system("..\\final_syn.exe");
      }
   }while(op!=9);
   
 return 0;
 }

