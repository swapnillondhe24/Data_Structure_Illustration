#include<iostream>
#include<conio.h>
using namespace std;
 int factorial(int n);
 int main()
 {
   int n;
   cout<<"Enter a positive integer: ";
   cin>>n;

   cout<<" factorial of "<< n <<" = "<< factorial(n);
   getch();
   system("..\\final_syn.exe");
 }
  int factorial(int n)
  {
   if(n>1)
      return n*factorial(n-1);
   else
       return 1;
  }
