#include <stdio.h>
#include <stdlib.h>
#include "Singlelinkedlist.h"

List* InitList(void)
{
	List* init = malloc(sizeof(Node));
	if(!init)
	{
		return NULL;
	}
    init->Head->Next = NULL;

    return init;
}


int AddElement (List* element, int addElements)
{
	if(element->Head==NULL)
	{
		element->Head=malloc(sizeof(Node));
		element->Head->SomeData = addElements;
		element->Head->Next = NULL;
		return 0;

	}
	Node* CurrentPointer = element->Head;
	while(CurrentPointer->Next!=NULL)
	{
		CurrentPointer = CurrentPointer->Next;
	}
	CurrentPointer->Next = malloc(sizeof(Node));
	CurrentPointer = CurrentPointer->Next;
	CurrentPointer->SomeData = addElements;
	CurrentPointer->Next = NULL;

	return 0;
}

void PrintElements ( const List* print)
 {
	Node* print1 = print->Head;
	while(print1!=NULL)
	{
		printf("DATA:%d\n ",print1->SomeData);
		print1 = print1->Next;

	}
 }

 int CleanList (List* element)
 {
	 if(element==NULL)
	 {
		 return -1;
	 }

	 if (element->Head==NULL)
	 {
		 free(element);
		 return 0;
	 }
	 if(element->Head->Next==NULL)
	 {
		 free(element->Head);
		 free(element);
		 return 0;
	 }
	 	 else
	 	 {

	 		 Node* CurrPointer = element->Head;
	 		 Node* CurrNextPointer = CurrPointer->Next;
	 		 while(CurrNextPointer!=NULL)
	 		 {
	 			 free(CurrPointer);
	 			 CurrPointer = CurrNextPointer;
	 			 CurrNextPointer = CurrNextPointer->Next;
	 		 }
		 free(CurrPointer);
	     free(element);
	 	 return 0;
	     }
 }
