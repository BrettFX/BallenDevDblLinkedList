#ifndef BALLENDEVDBLLINKEDLIST_H_
#define BALLENDEVDBLLINKEDLIST_H_

#include <iostream>
#include <string>

class BallenDevDblLinkedList
{
	private:
		
		struct Node
		{
			int key;
			Node* next;
			Node* prev;
		};
		
		Node* head;	
		Node* tail;
	
	public:
		
		BallenDevDblLinkedList();
		
		/*Insert a node in it's correct location based on a ascention algorithm*/
		void insert(int key);
		
		/*Delete a node from the list*/
		void deleteNode(int key);
		
		/*Get the memory address of the beginning of the list*/
		Node* getHead() const;
		
		/*Get the memory address of the end of the list*/
		Node* getTail() const;
		
		/*Display the list in ascending order*/
		void displayAscending();
		
		/*Display the ist in descending order*/
		void displayDescending();
		
		~BallenDevDblLinkedList();
	
};

#endif