#include <iostream>

#include "BallenDevDblLinkedList.h"

using namespace std;

int main(int argc, char** argv)
{
	BallenDevDblLinkedList dblList;
	
	dblList.insert(6);
	dblList.insert(10);
	dblList.insert(7);
	dblList.insert(8);
	dblList.insert(1);
	dblList.insert(3);
	dblList.insert(5);
	dblList.insert(2);
	dblList.insert(4);
	dblList.insert(9);

	dblList.displayAscending();
	dblList.displayDescending();
	
	return 0;
}