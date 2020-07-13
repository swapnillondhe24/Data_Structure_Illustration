#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
system("cls");
int ch;
	cout <<"Enter choice \n1.linked list\n2.doubly linked\n3.heap sort\n4.stack\n5.circular linked list\n6.expression tree conversons\n7.tree\n8.exit\nEnter your choice   :  ";
	cin >> ch;
	
	
	do
	{

	switch(ch)
		{
			case 1:
				system("D:\\SWAPNIL\\DSU\\OOP_REQUIRMENTS\\Linked_list.exe");
				break;
			case 2:
				system("D:\\SWAPNIL\\DSU\\OOP_REQUIRMENTS\\Doubly_LL.exe");
				break;
			case 3:
				system("D:\\SWAPNIL\\DSU\\OOP_REQUIRMENTS\\Heap_sort.exe");
				break;
			case 4:
				system("D:\\SWAPNIL\\DSU\\OOP_REQUIRMENTS\\stack.exe");
				break;
			case 5:
				system("D:\\SWAPNIL\\DSU\\OOP_REQUIRMENTS\\circ_LL.exe");
				break;
			case 6:
				system("D:\\SWAPNIL\\DSU\\OOP_REQUIRMENTS\\exp_tree_trav.exe");
				break;
			case 7:
				system("D:\\SWAPNIL\\DSU\\OOP_REQUIRMENTS\\tree.exe");
				break;
		
		
		}
	}while(ch!=8);
return 0;
}
