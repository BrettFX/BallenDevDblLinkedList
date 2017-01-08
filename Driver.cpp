#include <iostream>

#include "BallenDevDblLinkedList.h"

using namespace std;

enum Choices
{
	INSERT = 1,
	DELETE,
	DISPLAY_ASCENDING,
	DISPLAY_DESCENDING,
	EXIT
};

void showMenu();
void renderChoice(int choice, BallenDevDblLinkedList& dblList);

int main(int argc, char** argv)
{
	BallenDevDblLinkedList dblList;	
	int choice = 0;
	
	do
	{
		do
		{
			showMenu();
			cin >> choice;
			
			if(choice < INSERT || choice > EXIT)
				cout << "\nInvalid Choice.\n\n";
			else
				renderChoice(choice, dblList);
			
		}while(choice < INSERT || choice > EXIT);
			
		if(choice == EXIT)
			std::cout << "Exiting...\n\n";
		
	}while(choice != EXIT);
	
	return 0;
}

void showMenu()
{
	cout << "\n***************Doubly Linked List***************\n";
	cout << INSERT << ". Insert\n";
	cout << DELETE << ". Delete\n";
	cout << DISPLAY_ASCENDING << ". Display (Ascending)\n";
	cout << DISPLAY_DESCENDING << ". Display (Descending)\n";
	cout << EXIT << ". Exit\n\n";
	cout << ">> ";
}

void renderChoice(int choice, BallenDevDblLinkedList& dblList)
{
	int input = 0;
	
	switch(choice)
	{
		case INSERT:
			cout << "Enter key to insert: ";
			cin >> input;
			dblList.insert(input);
			break;
			
		case DELETE:
			dblList.displayAscending();
			cout << "Enter key to delete: ";
			cin >> input;
			dblList.dispose(input);
			break;
			
		case DISPLAY_ASCENDING:
			dblList.displayAscending();
			break;
			
		case DISPLAY_DESCENDING:
			dblList.displayDescending();
			break;
	}
}