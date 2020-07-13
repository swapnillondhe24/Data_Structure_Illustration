#include <iostream>
#include <conio.h>
using namespace std;
/********************* Structure of a node ***********************/
class node
 { public:
       int  data;
       node *next;
       node()   //default constructor
	{ next=NULL;
	}
       node(int x)   //parameterised constructor
	{next=NULL;
	 data=x;
	}
 };
class linkedlist
 {   node *head; //to store the address of the starting node
   public:
     linkedlist()
      { head=NULL;
      }
  //Default constructor will set the initial value of 'head' to NULL.
  //Initially, a linked list is empty
     ~linkedlist(); // Destructor to delete a linked list.
		    // Destructors are called automatically
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
 { node *p;
       while(head !=NULL)
	{ p=head;
	  head=head->next;
	  delete p;
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
	 head=p=new node(x);
       else
	{ p->next=new node(x);
	  p=p->next;
	}
     }
  }

 void linkedlist::print()
 { cout<<"\n Data stored in the linked list : ";
   for(node *p=head; p!=NULL ; p=p->next)
    cout<<p->data<<" ";
 }

 int linkedlist::count()
 { int i=0;
   for(node *p=head; p!=NULL ; p=p->next)
     i++;
   return i;
 }

 int linkedlist::search(int x)
 { int i=0;
   for(node *p=head; p!=NULL ; p=p->next)
    { if(p->data == x)
	return(i);
      i++;
    }
   return -1;
 }

 void linkedlist::insert(int x,int loc)
 { node *p=new node(x);
   if(loc==1) // inserting as a first node
    { p->next=head;
      head=p;
    }
   else
    { node *q=head;
      for(int i=1; i<loc-1;i++)
       if(q!=NULL)
	 q=q->next;
       else
	 { cout <<"\nOverflow **** ";
	   return;
	 }
     //insert a node as next node of q
     p->next=q->next;
     q->next=p;
   }
}

 void linkedlist::Delete(int loc)
 {  node *p,*q;
    int i;
    if(loc==1) //Deleting the first node
     { p=head;
       head=head->next;
       delete p;
     }
   else
    { q=head;
      for(i=1;i<loc-1;i++) //postion q on (loc-1)th node
       if(q->next==NULL)
	{ cout << "\n Underflow *****";
	  return;
	}
       else
	q=q->next;
     p=q->next;
     q->next=p->next;
     delete p;
   }
 }
 void linkedlist::sort()
 { 
	int i,j,temp;
	int n=count();
	node *p;

	for(i=1;i<n;i++)
    {
		p=head;           //p ponts to jth node
    	for(j=0;j<n-i;j++,p=p->next)
    	
			if(p->data > p->next->data)
	    		{ 
					temp=p->data;
					p->data=p->next->data;
					p->next->data=temp;
       			}
	}
 }
int main()
 { int op,x,loc;
   linkedlist l,l1,l2;
   system("cls");
   do
   { 
	cout<<"\n\n1)Create\n2)Print\n3)Insert\n4)Delete\n5)length";
    cout<<"\n6)Search\n7)Sort\n8)Quit";
    cout<<"\nEnter your Choice : ";
    cin >> op;
    switch(op)
	{  
		case 1: l.create();break;
		case 2: l.print();break;
		case 3: cout<<"Enter the location :"; cin >> loc;
			cout<<"Enter the data  :"; cin>>x;
			l.insert(x,loc);break;
		case 4: cout<<"Enter the location :"; cin >> loc;
			l.Delete(loc);break;
	
		case 5: cout << "Length of the linked list = "<<l.count();
			break;
		case 6: cout << "Enter element to be searched : ";
			cin >> x;
			loc=l.search(x);
			if(loc==-1)
				cout << "\n Element not found ";
			else
				cout << "\n Found at location : "<<loc+1;
			break;
       case 7:l.sort();
		    	cout <<"\nSorted Data :\n";
		    	l.print();
		    	break;
		case 8:
		   		system("..\\final_syn.exe");
		   	break;
	}
   }while(op!=8);
  
  return 0; 
}
 
