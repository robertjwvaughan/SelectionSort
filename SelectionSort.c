/*
Selection Sort
Robert Vaughan
29/02/2016
*/

#include <stdio.h>
#define SIZE 4

//Prototypes
void selectionSort(int*);

main()
{
	int my_array[SIZE] = {4, 6, 1, 2};
	int i = 0;
	
	selectionSort(my_array);
	
	for (i = 0; i < SIZE; i++)
	{
		printf("%d", *(my_array + i));
	}//end for
	
}//end main

/*
	Implementation of Selection Sort
*/

void selectionSort(int* sort_array)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	
	for (i = 0; i < SIZE - 1; i++)
	{
		for (j = 0; j < SIZE - 1; j++)
		{
			if (*(sort_array + j) > *(sort_array + (j + 1)))
			{
				temp = *(sort_array + j);
				*(sort_array + j) = *(sort_array + (j + 1));
				*(sort_array + (j + 1)) = temp;
			}//end if
			
		}//end for
		
	}//end for
	
}//end Selection

		


