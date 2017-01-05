#ifndef BALLENDEVDBLLINKEDLIST_H_
#define BALLENDEVDBLLINKEDLIST_H_

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
		void insertNode(int key);
		
		/*Delete a node from the list*/
		void deleteNode(int key);
		
		/*Get the memory address of the beginning of the list*/
		Node* getHead() const;
		
		/*Get the memory address of the end of the list*/
		Node* getTail() const;
		
		/*Display the list*/
		void display();
		
		~BallenDevDblLinkedList();
	
}

#endif