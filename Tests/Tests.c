#include "Singlelinkedlist.h"
#include <assert.h>
#include <stdio.h>
#include <stdint.h>
#include "ctest.h"

static int AddElementAndClearListTestFuncion(void)
{
	List* list = InitList();
    for (int i=0; i<50; i++)
    {
        assert(i>0);
    	assert(AddElement(list, i) == 0);
    }
assert(CleanList(list) == 0);

return 0;

}

static int EraseLastTestFuncion(void)
{
	List* list = InitList();
    double testData = 10;
    assert(AddElements(list, &testData) == 0);
    assert(RemoveLast(list, &testData) == 0);
	ClearList(list);
	return 0;

}
int main(void)
{
	AddElementAndClearListTestFuncion();
	EraseLastTestFuncion();
	return 0;
}
