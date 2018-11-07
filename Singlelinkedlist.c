#include <stdio.h>
#include <stdlib.h>
#include "Singlelinkedlist.h"


ListS* InitList(void)
{
	ListS* init = malloc(sizeof(NodeS));
	if (!init)
	{
		return NULL;
	}
    init->Head = NULL;
    return init;
}


int AddElement (ListS* element, const int addElements)
{
	if (element->Head==NULL)
	{
		element->Head=(NodeS*)malloc(sizeof(NodeS));
		element->Head->SomeData = addElements;
		element->Head->Next = NULL;
		return 0;

	}
	NodeS* CurrentPointer = element->Head;
	while (CurrentPointer->Next!=NULL)
	{
		CurrentPointer = CurrentPointer->Next;
	}
	CurrentPointer->Next = (NodeS*)malloc(sizeof(NodeS));
	CurrentPointer = CurrentPointer->Next;
	CurrentPointer->SomeData = addElements;
	CurrentPointer->Next = NULL;

	return 0;
}

void PrintElements ( const ListS* print)
 {
	NodeS* print1 = print->Head;
	while (print1!=NULL)
	{
		printf("DATA:%d\n ",print1->SomeData);
		print1 = print1->Next;

	}
 }

 int CleanList (ListS* element)
 {
	 if (element==NULL)
	 {
		 return -1;
	 }

	 if (element->Head==NULL)
	 {
		 free(element);
		 return 0;
	 }
	 if (element->Head->Next==NULL)
	 {
		 free(element->Head);
		 free(element);
		 return 0;
	 }
	 	 else
	 	 {

	 		 NodeS* CurrPointer = element->Head;
	 		 NodeS* CurrNextPointer = CurrPointer->Next;
	 		 while (CurrNextPointer!=NULL)
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

 int PopLast(ListS *element, int *CurrDataBuf)
 {
 	if (!element)
 	{
 		return -1;
 	}
 	if (element->Head == NULL)
 	{
 		return 0;
 	}

 	if (element->Head->Next == NULL)
 	{
 	 	if (CurrDataBuf)
 	 	{
 	 		*CurrDataBuf = element->Head->SomeData;
 	 	}

 		free(element->Head);
 		element->Head = NULL;
 		return 0;
 	}
 	else
 	{
 		NodeS* CurrPointer = element->Head->Next;
 		NodeS* CurrPrevPointer = element->Head;
 		while (CurrPointer->Next != NULL)
 		{
 			CurrPointer = CurrPointer->Next;
 			CurrPrevPointer = CurrPrevPointer->Next;
 		}
 		if (CurrDataBuf)
 		 	 	{
 		 	 		*CurrDataBuf = CurrPointer->SomeData;
 		 	 	}
 		free(CurrPointer);
 		CurrPointer = NULL;
 		CurrPrevPointer->Next = NULL;
 		return 0;
 	}

 	return -1;

 }
