#pragma once

#include <time.h>
#include <math.h>
#include <iostream>
#include "LinkedList.h"
#include <chrono>
#include <thread>

using namespace chrono;
using namespace this_thread;

//template <typename T>
//The insertion_Sorting function to take the pre-existing nodes and sort the accordingly using the insertion sort method.
node* insertion_Sorting(node* head)
{
	//sets the node "sortResult" to NULL
	//sets the node sortList to the head node
	node* sortResult = NULL;
	node* sortList = head;
	//while loop for if the sortList does not equal to NULL
	while(sortList != NULL)
	{
		node* next = sortList->next;
		sortList = next;
	}
	//Returns the now insertion-sorted linked list
	return sortResult;
}
//The merge_Sorting function to take the pre-existing nodes and sort them accordingly using the merg sort method
node* merge_Sorting(node* head)
{
	node* mergeResult = NULL;
	//node pointers for the merge sort method
	node* a;
	node* b;

	merge_Sorting(a);
	merge_Sorting(b);

	//if statement for if the linked list is empty
	if ((head == NULL) | (head->next == NULL))
	{	//prints the error message and uses the system command "Sleep" 
		//to pause for 2 seconds to allow the user to see the message before it continues
		cout << "\nError, linked list is currently empty\n";
		sleep_for(2s);
		return 0;
	}
	//if a is empty, return the b value
	if (a == NULL)
	{
		return (b);
	}//if b is empty, return the a value
	else if (b == NULL)
	{
		return (a);
	}
	//if statement for either a or b
	if (a->nodeData < b->nodeData)
	{
		mergeResult = a;
		mergeResult->next = merge_Sorting(a->next, b);
	}
	else //if a > b
	{
		mergeResult = b;
		mergeResult->next = merge_Sorting(b->next, a);
	}
	//returns the newly merge sorted list
	return(mergeResult);
}