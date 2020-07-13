#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int ch,ch1,ch2,ch3;
	system("cls");
	cout << "******   DSU ILLUSTRATION   *****";
	cout << "\n1.Searching\n2.Sorting\n3.Stack\n4.Queue\n5.Linked Lists\n6.Tree\n7.Quit\nEnter Your choice : ";
	cin >> ch; 

		switch(ch)
		{
			case 1:
				cout <<"\n\n\n*** What kind of Searching ***\n1.Binary Search\n2.Linear Search\nEnter Your choice : ";
				cin >> ch1;
				switch(ch1)
				{
					case 1:
						system(".\\EXE\\binary_search.exe");
						break;
					case 2:
						system(".\\EXE\\Linear_search.exe");
						break;
				} 
				break;
			
			case 2:
				cout <<"\n\n\n*** What kind of Sorting ***\n1.Bubble Sort\n2.Selection Sort\n3.Insertion Sort\n4.Quick Sort\n5.Merge Sort\nEnter Your choice : ";
				cin >> ch1;
				switch(ch1)
				{
					case 1:
						system(".\\EXE\\bubble_sort.exe");
						break;
					case 2:
						system(".\\EXE\\SELECTIO.exe");
						break;
					case 3:
						system(".\\EXE\\INSERTSO.exe");
						break;
					case 5:
						system(".\\EXE\\merge_sort.exe");
						break;
					case 4:
						system(".\\EXE\\quick_sort.exe");
						break;
				}
				break;
			
			case 3:
				cout <<"\n\n*** STACK ***\n1.Operations on Stack \n2.Applications of Stack\nEnter Your choice : ";
				cin >> ch1;
				switch(ch1)
				{
					case 1:
						system(".\\EXE\\stack_arr.exe");
						break;
					case 2:
						cout << "\n\n1.Recursion\n2.Expression Conversion\nEnter Your choice : ";
						cin >> ch2;
						switch(ch2)
						{
							case 1:
								cout <<" \n\n\n************** RECURSION **************\n1.Factorial of Number(using recursion)\n2.Reversal Of string\nEnter Your choice : ";
								cin >> ch3;
								switch(ch3)
								{
									case 1:
										system(".\\EXE\\FACTORIA.exe");
										break;
									case 2:
										system(".\\EXE\\stack_rev.exe");
										break;
								} 
								break;
							case 2:
								cout <<"\n\n\n************** Expression Conversion **************\n1.Infix to postfix\n2.Infix to Prefix\nEnter Your choice : ";
								cin >> ch3;
								switch(ch3)
								{
									case 1:
										system(".\\EXE\\Postfix.exe");
										break;
									case 2:
										system(".\\EXE\\infix_prefix.exe");
										break;
	
								}
								break;
						}
						break;
				} 
				break;
			
			case 4:
				cout <<"\n\n\n***** QUEUE *****\n1.Operations on Queue \n2.Applications of Queue\nEnter Your choice : ";
				cin >> ch1;
				switch(ch1)
				{
					case 1:
						system(".\\EXE\\linear_queue.exe");
						break;
					case 2:
						cout << "\n\n1.Josephus Problem\n2.Round Robin Algorithm\nEnter Your choice : ";
						cin >> ch2;
						switch(ch2)
						{
							case 1:
								system(".\\EXE\\josephus_problem.exe");
								break;
							case 2:
								system(".\\EXE\\round_robin.exe");
								break;
						}

						break;
				}
				break;
			
			case 5:
				cout << "\n\n\n****** Linked List ******";
				cout << "\n1.Singly linked list\n2.Doubly linked list\nEnter Your choice : ";
				cin >> ch1;
				switch(ch1)
				{
					case 1:
						cout << "\n\n***** All the below are operations on Singly linked list *****\n\n1.Operations on singly linked lists\n2.Circular Linked list\n3.Stack\n4.Queue\nEnter Your choice : ";
						cin >> ch2;
						switch(ch2)
						{
							case 1:
								system(".\\EXE\\Linked_list.exe");
								break;
							case 2:
								system(".\\EXE\\circ_LL.exe");
								break;
							case 3:
								system(".\\EXE\\stack.exe");
								break;
							case 4:
								system(".\\EXE\\linear_queue.exe");
								break;
						}
						break;
					case 2:
						cout << "\n***** All the below are operations on Doubly linked list *****\n1.Operations on Doubly lists\n2.Stack\n3.Queue\nEnter Your choice : ";
						cin >> ch2;
						switch(ch2)
						{
							case 1:
								system(".\\EXE\\Doubly_LL.exe");
								break;
							case 2:
								system(".\\EXE\\stack.exe ");
								break;
							case 3:
								system(".\\EXE\\linear_queue.exe");
								break;
						}
						break;
				}
				break;
			case 6:
				cout << "****** TREE ******";
				cout << "\n1.Operations on tree\n2.tree genration\n3.Heap Sort\n4.PostFix to Inorder\n5.Postfix to PreOrder\nEnter Your choice : ";
				cin >> ch1;
				switch(ch1)
				{
					case 1:
						system(".\\EXE\\tree.exe");
						break;
					case 2:
						system(".\\EXE\\Tree_EXP.exe");
						break;
					case 3:
						system(".\\EXE\\Heap_sort.exe");
						break;
					case 4:
						system(".\\EXE\\exp_tree_trav.exe");
						break;
					case 5:
						system(".\\EXE\\Prefix.exe");
						break;
				}
				break;
			case 7:
					cout << " \n\n BYE BYE \n";
					exit(0);		
				break;			
		}
}
