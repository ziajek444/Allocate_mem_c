#include <stdlib.h>
#include <stdio.h>

#define PRINTi(number) printf("%d\n",number)

void alloc(int ** ptr, int size)
{
	*ptr = (int*)calloc(size,sizeof(int));
}

void dealloc(int ** ptr)
{
	free(ptr[0]);
}

void printTab(int * ptr, int size)
{
	while (size--) PRINTi( ptr[size] );
}

void upload(int agr[], int *ptr, int size)
{
	while (size--) ptr[size] = agr[size];
}



int main()
{
	int* wsk;
	const int size = 3;
	int tab[] = { 11,33,55,99 };

	alloc(&wsk, size);
	printTab(wsk, size);

	upload(tab, wsk, size);
	printTab(wsk, size);

	dealloc(&wsk);
	printTab(wsk, size);

	return 0;
}