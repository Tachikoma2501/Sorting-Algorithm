#pragma once

#include <iostream>
#include <cstdlib>
#include <list>
#include <string>
//using namespace std so we dont have to type out std:: every time
using namespace std;
//sets the node head to NULL
struct node* head = NULL;

//Defines the structure for the node
//template <class T>
struct node
{
	int nodeData;
	//creates a node pointer
	struct node* next;
};
//the class for linkedList 
class linkedList
{
public://defines the nodes for head/tail
	//creates the node pointers for the head and tail nodes/values within the linked list
	node* head;
	node* tail;

	//node pointers for the merge sort method
	node* a;
	node* b;

public://sets the head/tail & a and b nodes starting to NULL to public
	linkedList()
	{
		head = NULL;
		tail = NULL;
	}
};

//inserts the node into the linked list
//template <class T>
void insertNode(struct node** head, int d)
{
	//sets new_Node as a new node when inserted into the linked list
	node* new_Node = new node;
	//a simple insert node which adds a new node to the front.
	new_Node->nodeData = d;
	new_Node->next = *head;
	*head = new_Node;

}


//This displays the values currently within the linked list
//template <class T>
void display_linkedList(node* head)
{
	cout << "\nThe values currently in the linked list are: \n";
	node *display = head;
	//if statement fo if the display (head) in the linked list is not NULL
	if (display != NULL)
	{	//prints the current values within the linked list
		cout << " " << display->nodeData;
		display_linkedList(head->next);
	}
	else//else statement
	{
		cout << "\nError, Linked List is Empty\n";
	}
}
//a function to empty the linked list
void emptyList(node* head, struct node* next)
{
	//defines the node current_List to the head node value 
	node* current_List = head;

	//while statement for if the linked list currently has nodes/values within it
	while(current_List != NULL)
	{	//uses the system function "free" to empty the nodes from the linked list
		next = current_List->next;
		free(current_List);
		current_List = next;
	}
	head = NULL;
}