#include "logic.h"

int absol(int number) {
	return number < 0 ? -number : number;
}

int get_max_last_ind(int* array, int size) {
	int index = size - 1;

	for (int i = size - 2; i >= 0; i--)
	{
		if (absol(*(array + i)) > absol(*(array + index))) {
			index = i;
		}
	}
	return index;
}

int get_min_first_ind(int* array, int size) {
	int index = 0;

	for (int i = 1; i < size; i++)
	{
		if (absol(*(array + i)) < absol(*(array + index))) {
			index = i;
		}
	}

	return index;
}


int sum_ex_el(int* array, int size) {
	int max = get_max_last_ind(array, size);
	int min = get_min_first_ind(array, size);
		
	int sum = 0;

	if (min > max) {
		int t = min;
		min = max;
		max = t;
	}

	for (int i = min + 1; i < max; i++)
	{
		sum += *(array + i);
	}

	return sum;
}