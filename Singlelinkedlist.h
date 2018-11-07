
#ifndef SINGLELINKEDLIST_H_
#define SINGLELINKEDLIST_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct NodeS
{
	int SomeData;
	struct NodeS* Next;

}NodeS;

typedef struct ListS
{
	NodeS* Head;


}ListS;

int AddElement (ListS* element, const int addElements);
void PrintElements ( const ListS* print);
int CleanList (ListS* element);
ListS* InitList(void);
int PopLast(ListS *element, int *CurrDataBuf);



#endif /* SINGLELINKEDLIST_H_ */
