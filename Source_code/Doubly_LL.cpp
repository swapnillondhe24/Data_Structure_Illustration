/*Program 1.8 : Class definition for a Doubly Linked List */
#include <iostream>
#include <conio.h>
using namespace std;


class dnode
 { public:
       int  data;
       dnode *next,*prev;
       dnode()   //default constructor
	{ next=prev=NULL;
	}
       dnode(int x)   //parameterised constructor
	{next=prev=NULL;
	 data=x;
	}
  };


class linkedlist
 {   dnode *head; //to store the address of the starting node
   public:
     linkedlist()
      { head=NULL;
      }
     ~linkedlist(); // Destructor to delete a linked list.
     void create();
     void print();
     int count();
     int search(int x);
     void insert(int x,int loc);
     void Delete(int loc);
     void sort();
     void reverse();
     void merge(linkedlist &l1,linkedlist &l2);
 };

 linkedlist:: ~linkedlist()
     { dnode *p;
       while(head !=NULL)
	{ p=head;
	  head=head->next;
	  delete p;
	}
     }
void linkedlist:: create()
  { int x,n,i;
    dnode *p;
    cout << "\n Enter no of nodes : ";
    cin>>n;
    for(i=0;i<n;i++)
     { cout<<"\n Next Data : ";
       cin >> x;
       if(head==NULL) // inserting the first node
	 head=p=new dnode(x);
       else
	{ p->next=new dnode(x);
	  p->next->prev=p;
	  p=p->next;
	}
     }
  }

 void linkedlist::print()
 { cout<<"\n Data stored in the Doubly linked list : ";
   for(dnode *p=head; p!=NULL ; p=p->next)
    cout<<p->data<<" ";
 }

 int linkedlist::count()
 { int i=0;
   for(dnode *p=head; p!=NULL ; p=p->next)
     i++;
   return i;
 }

 int linkedlist::search(int x)
 { int i=0;
   for(dnode *p=head; p!=NULL ; p=p->next)
    { if(p->data == x)
	return(i);
      i++;
    }
   return -1;
 }

 void linkedlist::insert(int x,int loc)
 { dnode *p=new dnode(x);
   if(loc==1) // inserting as a first node
    { p->next=head;
      head->prev=p;
      head=p;
    }
   else
    { dnode *q=head;
      for(int i=1; i<loc-1;i++)
       if(q!=NULL)
	 q=q->next;
       else
	 { cout <<"\nOverflow **** ";
	   return;
	 }
     p->next=q->next;
     p->prev=q;
     q->next=p;
     q->next->prev=q;
   }
}

 void linkedlist::Delete(int loc)
 {  dnode *p,*q;
    int i;
    if(loc==1) //Deleting the first node
     {
	   p=head;
       head=head->next;
       head->prev=NULL;
       delete p;
     }
   else
    {
	  q=head;
      for(i=1;i<loc;i++) //postion q on the node to be deleted
       {
	   if(q==NULL)
		{
	 		cout << "\n Undeflow *****";
	 		return;
		}
       else
		q=q->next;
      }
    if(q->next != NULL)
     q->next->prev=q->prev;
    q->prev->next=q->next;
    delete q;
   }
 }

 void linkedlist::sort()
 { 
 int i,j,temp;
 int n=count();
   dnode *p;
   //bubble sort is being used for sorting
   for(i=1;i<n;i++)
    {p=head;           //p ponts to jth node
    for(j=0;j<n-i;j++,p=p->next)
     if(p->data > p->next->data)
       { // interchange
	 temp=p->data;
	 p->data=p->next->data;
	 p->next->data=temp;
       }
    }
 }
int main()
 { 
 int op,x,loc;
 linkedlist l,l1,l2;
 system("cls");
 do
   { 
	    cout<<"\n\n\n1)Create\n2)Print\n3)Insert\n4)Delete\n5)length\n6)Search\n7)Sort\n8)Quit";
       
    	cout<<"\nEnter your Choice : ";
 	    cin >> op;
    switch(op)
     {  
	case 1: 
		l.create();break;
	
	case 2: 
		l.print();break;
	
	case 3: 
		cout<<"Enter the location :"; cin >> loc;
		cout<<"Enter the data  :"; cin>>x;
		l.insert(x,loc);break;
	
	case 4: 
		cout<<"Enter the location :"; cin >> loc;
		l.Delete(loc);break;
	
	case 5: 
		cout << "Length of the linked list = "<<l.count();
		break;
	
	case 6: cout << "Enter element to be searched : ";
		cin >> x;
		loc=l.search(x);
		if(loc==-1)
		  cout << "\n Element not found ";
		else
		 cout << "\n Found at location : "<<loc+1;
		break;
       
    case 7:
		l.sort();
	    cout <<"\nSorted Data :\n";
	    l.print();
	    break;
	case 8:
		system("..\\final_syn.exe");
      }
   }while(op!=8);
   
   return 0;
   }


