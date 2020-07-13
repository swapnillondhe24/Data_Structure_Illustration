#include <iostream>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
using namespace std;
struct node
{
  char data;
  node *left,*right;
};
class stack
{  node *data[30];
   int top;
  public:
    stack(){top=-1;}
    int empty(){if(top==-1)
		   return 1;
		return 0;
	       }
     void push(node *p){data[++top]=p;}
     node *pop(){return(data[top--]);}
 };

void preorder(node *T)
{  	if(T!=NULL)
	{
		cout<<T->data;
		preorder(T->left);
		preorder(T->right);
	}
}
int main()
{
	char c;
	stack s;
	node *top,*t1,*t2;
	top=NULL;
	
	cout<<"Enter a postfix expression : ";
	while((c=getchar())!='\n')
	{    if(isalnum(c))
		{
			top=new node;;
			top->left=NULL;
			top->right=NULL;
			top->data=c;
			s.push(top);
		}
		else
		{
			t2=s.pop();
			t1=s.pop();
			top=new node;
			top->data=c;
			top->left=t1;
			top->right=t2;
			s.push(top);
		}
	}
top=s.pop();
cout<<"\nPrefix : ";
preorder(top);
getch();
system("..\\final_syn.exe");
return 0;
}
