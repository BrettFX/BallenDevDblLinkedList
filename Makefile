all: Driver.o BallenDevDblLinkedList.o
	g++ -Wall Driver.o BallenDevDblLinkedList.o -o output.out

BallenDevDblLinkedList.o: BallenDevDblLinkedList.cpp
	g++ -Wall -c BallenDevDblLinkedList.cpp

Driver.o: Driver.cpp
	g++ -Wall -c Driver.cpp

clean:
	rm -rf *.o
	rm -f *.out
	rm -f *~*.h.gch *#[

run:
	./output.out
