#include "logic.h"

void sort_selected(int array[], int size) {

	for (int i = 0; i < size - 1; i++)
	{
		int index = i;

		for (int j = i + 1; j < size; j++)
		{
			if (array[index] > array[j])
			{
				index = j;
			}
		}

		int t = array[i];
		array[i] = array[index];
		array[index] = t;

	}
}