/*Stack as a class  */
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
class node
 { public :
   int data;
   node *next;
   node()         
    { next=NULL;
    }
   node(int x)
    { next=NULL;data=x;  //parameterized constructor
    }
 };
class stack
{   node *top;
  public:
    stack()
     { top=NULL;
     }
     int empty()
       { if(top==NULL)
	   return 1;
	 return 0;
       }
     int pop()
	{ if(empty())
	   {cout <<"\n Underflow ******";
	    return(-1);
	   }
	  else
	   { node *p=top;
	     top=top->next;
	     int x=p->data;
	     delete p;
	     return x;
	   }
	}

     void push(int x)
	 { node *p=new node(x);
	   p->next=top;
	   top=p;
	 }
     void print();
  };
 void stack::print()
	{node *p=top;
	 cout<<"\n";
	 while(p!=NULL)
	  { cout<<p->data<<"  ";
	    p=p->next;
	  }
	}

 int main()
 { int op,x;
   stack s;
 	system("cls");
   do
     { cout<<"\n\n1)Push";
       cout<<"\n2)Pop";
       cout<<"\n3)Print";
       cout<<"\n4)Quit";
       cout<<"\nEnter Your Choice: ";
       cin>>op;
       switch(op)
	{ case 1: cout <<"\n Enter an Element : ";
		  cin>>x;
		  s.push(x);break;
	  case 2: cout<<"Popped Element= "<< s.pop();
		  break;
	  case 3: s.print();break;
	  case 4:
	  		system("..\\final_syn.exe");
	  }
       }while(op!=4);
       
       return 0;
 }

