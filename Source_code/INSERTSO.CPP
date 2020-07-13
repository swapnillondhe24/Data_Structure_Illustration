#include<iostream>
#include<conio.h>>
using namespace std;
int main()
{
int n,array[100],c,d,t;
cout << "\n\n\n*********************** INSERTION Sort ****************************************\n\n\n";
cout<<"\n\nenter number of elemment\n";
cin>>n;
cout<<"enter "<<n<<" integers\n";
for(c=0;c<n;c++)
{
cin>>array[c];
}
for(c=1;c<=n-1;c++)
{
d=c;
while(d>0 && array[d]<array[d-1])
{
t=array[d];
array[d]=array[d-1];
array[d-1]=t;
d--;
}
}
cout<<"sorted list in ascending order:\n";
for(c=0;c<=n-1;c++)
{
cout<<array[c]<<"\n";
}
getch();
system("..\\final_syn.exe");
}
