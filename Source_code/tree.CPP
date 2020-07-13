#include<conio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int max(int value1, int value2)
{ return ( (value1 > value2) ? value1 : value2);
}
class node
{  public:
   int data;
   node *left,*right;
   node(int x)
    {  data=x;
       left=right=NULL;
    }
};
class tree
 {     node *root;
       int  height1(node *T);//recursive counterpart of height()
       int  print0(node *T);//recursive counterpart of count_leaf_nodes()
       node * mirror1(node *T);//recursive counterpart of mirror()
    public:
       tree() { root=NULL;}
       void create();
       void mirror() { root=mirror1(root); }
       int height(){return(height1(root));}
       int print_leaf_nodes(){return(print0(root));}
       void level_wise();//level wise traversal
 };
class Q
{  node *data[30];
   int R,F;
  public:
    Q(){ R=F=-1; }

    void init()
     { R=F=-1;
     }

    int empty(){ if(R==-1)
		    return 1;
		 return 0;
	       }

     void insert(node *p)
       { if(empty())
	    R=F=0;
	 else
	   R=R+1;
	data[R]=p;
       }

     node *Delete()
      {  node *p=data[F];

	if(R==F)
	  R=F=-1;
	else
	  F=F+1;
	return(p);
     }
 };

int  tree::height1(node *T)
 { if(T==NULL)
    return(0);
   if(T->left==NULL && T->right==NULL)
    return(0);
   return(max(height1(T->left),height1(T->right))+1);
 }

int  tree::print0(node *T)
    { if(T==NULL)
       return(0);
      if(T->left==NULL && T->right==NULL)
       { cout<<"  "<<T->data;
	 return(1);
       }
      return(print0(T->left)+print0(T->right));
    }

void tree::create()
{  node *b[31];
   int x,i;/*data of each node of the tree is stored in an array to accept data on node no.*/
   for(i=1;i<10;i++)
      b[i]=NULL;
  /*left child of ith node will be at 2*i and right child at 2*i+1*/
  cout<<"\nPlease Enter data of root node(-1 for does not exist): ";
  cin>>x;
  /*set the different fields of the first node */
  if(x==-1)
    return;
  b[1]=new node(x);
  for(i=1;i<=5;i++)
   if(b[i]!=NULL)
    { cout<<"\nEnter Left child of "<< b[i]->data<< "  (-1 for does not exist): ";
      cin>>x;
      if(x!=-1)
       {
	  b[2*i]=new node(x);
	  b[i]->left=b[2*i];
       }
      cout<<"\nEnter Right child of "<< b[i]->data<< "  (-1 for does not exist): ";
      cin>>x;
     if(x!=-1)
       { b[2*i+1]=new node(x);
	 b[i]->right=b[2*i+1];
       }
    }
 root=b[1];
}
void tree::level_wise()
   { Q q1,q2;
   node *p1,*p2;
   node *T=root;

   if(T==NULL)
     return;
   q1.insert(T);
   cout<<"\n              "<<T->data;
   int i=4,j=4;
   while(!q1.empty())
    { /*Replace all nodes of the queue 'q1' with the nodes at the next level.
	Store nodes of next level in 'q2' */
	cout<<"\n";
	for(i;i>=0;i--)
		cout <<"  ";
	q2.init();
	while(!q1.empty())
	 {p1=q1.Delete();
	  if(p1->left !=NULL)
	    { q2.insert(p1->left);
	      cout<<"   "<<p1->left->data;
	    }
	  if(p1->right !=NULL)
	    { q2.insert(p1->right);
	      cout<<"  "<<p1->right->data;
	    }
	  }
	q1=q2;
	j--;
	i=j;
    }
 }
int main()
{       tree  t1;
	int xx,op;
	system("cls");
	do
	  { cout<<"\n\n1)Create\n2)Display Tree\n3)Print leaf nodes";
	    cout<<"\n4)Height\n5)Quit";
	    cout <<"\nEnter Your Choice :";
	    cin>>op;
	     switch(op)
	      {
		case 1:t1.create();break;
		case 2:cout<<"\n level Wise traversal on tree \n";
		       t1.level_wise();
		       break;
		case 3:
			 xx=t1.print_leaf_nodes();
			 cout<<"\nNo of leaf nodes= "<<xx;
			 break;
		case 4:
			cout<<"\nHeight = "<< t1.height();
			break;
	     }
	 }while(op!=5);
	 system("..\\final_syn.exe");
return 0;
}
