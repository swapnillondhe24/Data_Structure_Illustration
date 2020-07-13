//rev string
#include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
typedef struct stack
{
	char data;
	struct stack *next;
} stack;
void init(stack **);
int empty(stack *);
char pop(stack **);
void push(stack **,char);
int main()
{
	stack *TOP;
	char x;
	init(&TOP);
	cout<<"\n\nEnter the string  :   ";
	while((x=getchar())!='\n')
		push(&TOP,x);
	cout<<"\n";
	while(!empty(TOP))
	{
		x=pop(&TOP);
		cout<<x;
	}
	getch();
	system("..\\final_syn.exe");
}
void init(stack **T)
{
	*T=NULL;
}
int empty(stack *TOP)
{
	if(TOP==NULL)
		return(1);
	return(0);
}
void push(stack **T,char x)
{
	stack *P;
	P=new stack;
	P->data=x;
	P->next=*T;
	*T=P;
}
char pop(stack **T)
{
	char x;
	stack * P;
	P=*T;
	*T=P->next;
	x=P->data;
	delete P;
	return(x);
}
