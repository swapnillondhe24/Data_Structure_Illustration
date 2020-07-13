#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,n,a[100];
	
	system("cls");
	cout << "\n\n**************** BUBBLE SORT ****************\n\n";
	cout << "\n\nEnter no of elements to be sorted";
	cin >> n;
	cout << "Enter Elements : ";
	for(i=0;i<n;i++)
		cin >> a[i];
	for(i=0;i<n;i++)
	{
	
		for(j=0;j<n;j++)
			{
				if(a[j]>a[j+1])
				{
					int temp = a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
	}
cout << "\n\n**************** Sorted List ****************\n\n";
for(i=0;i<n;i++)
	cout << "\t"<<a[i];
getch();
system("..\\final_syn.exe");
}
