#include "..\Task01\util.h"
#include "logic.h"

int main() {
	int array[DEFAULT_SIZE];
	int size;

	cout << "Input the size of array: ";
	cin >> size;

	init_random(array, size, 0, 100);

	print("Array before sorting: " + convert(array, size) + "\n");

	sort_selected(array, size);

	print("Array after sorting: " + convert(array, size) + "\n");

	return 0;
}