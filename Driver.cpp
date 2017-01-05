#include <iostream>

#include "BallenDevDblLinkedList.h"

using namespace std;

int main(int argc, char** argv)
{
	BallenDevDblLinkedList dblList;
	
	dblList.insert(12);
	dblList.insert(1);
	dblList.insert(7);

	dblList.displayAscending();
	dblList.displayDescending();
	
	return 0;
}