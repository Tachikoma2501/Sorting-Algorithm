//Samuel Aaron Cooper
//November 27, 2018

#include "SortingAlgorithms.h"
#include "LinkedList.h"

//The main function
template <class T>
int main()
{
	//using the clock system command with reference to CPlusPlus
	//creates the clock system function to calculate how long it takes to sort the linked list
	clock_t c;
	c = clock();
	int t;

	// Start by creating an empty linked list
	struct node* head = NULL;
	//defines the integer listChoice
	int listChoice;
	//Uses a switch/case statement to create a user menu for interfacing with the linked list
	//do statement with cout printed options
	cout << "\nSorting Linked List Main Menu.\n";
	cout << "1. Insert a value into the linked list \n";
	cout << "2. Display the current Linked List \n";
	cout << "3. (Insertion) Sort the Linked List \n";
	cout << "4. (Quick) Sort the linked list \n";
	cout << "5. Empty Linked List\n";
	cout << "6. Exit Program";
	cout << "\nEnter Choice: ";
	cin >> listChoice;
	//switch statement with individual cases
	switch (listChoice)
	{

	case 1:
		//inputs the user value as a node into the linked list
		int value_input;
		cout << "\nInput a value to insert to head. \n";
		cout << "Enter: ";
		cin >> value_input;

		insertNode(&head, value_input);

		break;

	case 2:
		//Display Linked List
		display_linkedList();

		break;

	case 3:
		//Insertion Sort
		cout << "\nExecuting Insertion Sorting of Linked List \n";
		cout << "Calculating Time\n";
		insertion_Sorting(&head);

		printf("Theclock ticks lower than 100,000 is: %d\n", t);
		c = clock() - c;
		printf("It took %d clicks (%f seconds) to (insert) sort the linked list.\n", c, ((float)c) / CLOCKS_PER_SEC);
		return 0;

		break;

	case 4:
		//Quick Sort
		cout << "\nExecuting Quick Sorting of Linked List \n";
		cout << "Calculating Time\n";
		merge_Sorting(&head);

		printf("The clock ticks lower than 100,000 is: %d\n", t);
		c = clock() - c;
		printf("It took %d clicks (%f seconds) to (quick) sort the linked list.\n", c, ((float)c) / CLOCKS_PER_SEC);
		return 0;

		break;

	case 5:
		//deletes the current linked list
		emptyList(&head);
		cout << "\nThe linked list has been emptied of all nodes\n";
		break;

	default:
		cout << "An Invalid choice.\n" << endl;
	}
	while (listChoice != 6); //while statement for when listChoice is not equal to 0
	return 0;
}


void test_function()
{
	int value;

	//linkedList<int> *test_Table = new linkedList<int>;

	//test_Table->insertNode(8);


	if (value == 8)
	{
		cout << "Test is Successful!";
	}
	else
	{
		cout << "Test Failure!";
	}

}