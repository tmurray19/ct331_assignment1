//Extend linked list to accept any data type
//Hint: Use void* to create a pointer of any data type

/*
-Ensure all functions from q2 work (they do cuz im a good programmer lul amirite?)
-Update Traverse struct to store a function pointer.
	=Function should print out a specific data type
	e.g:
		void printChar(void* data){
			printf("%c\n", *(char*)data);	 

	=when traverse is called, use function pointer w/ elements data to print it out e.g:
		element->printFunction(element->data);
*/

#ifndef CT331_ASSIGNMENT_LINKED_LIST
#define CT331_ASSIGNMENT_LINKED_LIST

typedef struct listElementStruct listElement;
//Taken & changed from q2

//Creates a new linked list element with given content of size
//Returns a pointer to the element
listElement* createEl(void* data, size_t size, void* printFunction);

//Prints out each element in the list
void traverse(listElement* start);

//Inserts a new element after the given el
//Returns the pointer to the new element
listElement* insertAfter(listElement* after, void* data, size_t size, void* printFunction);

//Delete the element after the given el
void deleteAfter(listElement* after);

//ADDED FUNCTIONS:

//length(listElement* list)
//returns the number of elements in a linked list
int length(listElement* list);

//push(listElement* list, char* data, size_t size)
void push(listElement** list, void* data, size_t size, void* printFunction);

//pop(listElement** list)
listElement* pop(listElement** list);

//enqueue(listElement** list, char* data, size_t size)
void enqueue(listElement** list, void* data, size_t size, void* printFunction);

//dequeue(listElement* list)
listElement* dequeue(listElement* list);


//functions for data types:

//Characters
void printChar(void* data);
//Strings
void printString(void* data);
//Integers
void printInt(void* data);
//Floating point
void printFloat(void* data);
//Doubles
void printDouble(void* data);
//Long Integers
void printLong(void* data);

#endif
