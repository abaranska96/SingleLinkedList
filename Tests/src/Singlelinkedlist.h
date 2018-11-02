
#ifndef SINGLELINKEDLIST_H_
#define SINGLELINKEDLIST_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int SomeData;
	struct Node* Next; // Pointer for next element on the list
}Node;

typedef struct List
{
	Node* Head; // Pointer for first element on the list


}List;

int AddElement (List* element, int addElements);
void PrintElements ( const List* print);
int CleanList (List* element);
List* InitList(void);



#endif /* SINGLELINKEDLIST_H_ */
