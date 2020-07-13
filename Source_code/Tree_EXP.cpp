#include<conio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{  public:
   int data;
   node *left,*right;
   node(int x)
    {  data=x;
       left=right=NULL;
    }
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

class tree
 {     node *root;
       
    public:
       void level_wise()
		{
		 Q q1,q2;
   node *p1,*p2;
   node *T=root;

   if(T==NULL)
     return;
   q1.insert(T);
   cout<<"\n              "<<T->data;
   int i=4,j=4;
   while(!q1.empty())
    {
	cout<<"\n";
	for(i;i>=0;i--)
		cout <<"  ";
	q2.init();
	while(!q1.empty())
	 {
	  p1=q1.Delete();
	  if(p1->left !=NULL)
	    {
		  q2.insert(p1->left);
	      cout<<"   "<<p1->left->data;
	    }
	  if(p1->right !=NULL)
	    {
		  q2.insert(p1->right);
	      cout<<"  "<<p1->right->data;
	    }
	  }
	q1=q2;
	j--;
	i=j;
    }
 }
 void create()
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
};


int main()
{
tree  t1;
cout << "Enter The Tree";
t1.create();
t1.level_wise();
getch();
system("..\\final_syn.exe");
	
}
