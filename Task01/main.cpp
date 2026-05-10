#include "logic.h"

int main() {
	int array[DEFAULT_SIZE];
	int size;

	cout << "Input there size of array: ";
	cin >> size;

	init_random(array, size, -20, 20);

	print("Array: ");
	print(convert(array, size) + "\n");

	string duplicates = search_duplicates(array, size);

	print("\nArray: ");
	print(convert(array, size) + "\n");

	print("All duplicates from array: " + duplicates + " ");

	return 0;
}