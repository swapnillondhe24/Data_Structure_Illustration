#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int array[100],n,c,d,position,swap;
cout << "*********************** Selection Sort ****************************************";
cout<<"\n\nenter number of elments\n";
cin>>n;
cout<<"enter "<<n<<" integers\n";
for(c=0;c<n;c++)
cin>>array[c];
for(c=0;c<(n-1);c++)
{
position=c;
for(d=c+1;d<n;d++)
{
if (array[position]>array[d])
position=d;
}
if(position!=c)
{
swap=array[c];
array[c]=array[position];
array[position]=swap;
}
}
cout<<" sorted list in ascending order:\n ";
for(c=0;c<n;c++)
cout<<array[c]<<"\n";
getch();
system("..\\final_syn.exe");
}
