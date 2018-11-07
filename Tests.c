#include "Singlelinkedlist.h"
#include <assert.h>
#include <stdio.h>
#include <stdint.h>
#include "ctest.h"

static int InitTestFuncion(void)

{
	ListS* list = InitList();
	assert(!list);
	return 0;
}

static int AddElementAndClearListTestFuncion(void)
{
	ListS* list = InitList();
	const int EstimateNumbersOfTests = 100;
    for (int i=0; i<EstimateNumbersOfTests; i++)
    {
        assert(i>0);
    	assert(AddElement(list, i) == 0);
    }
assert(CleanList(list) == 0);

return 0;

}

static int PopLastTestFuncion(void)
{
	ListS* list = InitList();
    int ExampleTestData = 50;
    assert(AddElement(list, ExampleTestData) == 0);
    assert(PopLast(list, &ExampleTestData) == 0);
	CleanList(list);
	return 0;

}
int main(void)
{
	InitTestFuncion();
	AddElementAndClearListTestFuncion();
	PopLastTestFuncion();
	return 0;
}
