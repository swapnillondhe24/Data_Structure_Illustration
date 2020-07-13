#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[25],i,srch,n,flag=0;
	system("cls");
	cout << "Enter no of elements in array  : ";
	cin >> n;
	cout << "Enter "<< n <<" elements in array  : ";
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	cout << "Enter Element to be searched : ";
	cin >> srch;
	for(i=0;i<n;i++)
	{
		if(a[i]==srch)
			flag = 1;
			break;
		
	}
	if(flag==1)
		cout << "element found at "<<i+1 << " location";
	else
		cout << "Element not found";
	getch();
	system("..\\final_syn.exe");
}
