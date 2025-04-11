#include "util.h"
#include "logic.h"

int main() {
	int size;

	cout << "INput size: ";
	cin >> size;

	int* array = new int[size];

	init(array, size, -50, 100);

	cout << "Array: " << convert(array, size) << endl;

	cout << "Sum: " << sum_ex_el(array, size) << endl;

	delete[] array;

	return 0;
}
