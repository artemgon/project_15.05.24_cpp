#include <iostream>
using namespace std;

int main() {
	cout << "N = 6." << endl;
	const int size = 6;
	float array[size], sum_1 = 0, product_1 = 1, product_2 = 1, sum_2 = 0;
	cout << "Please, enter some real numbers: ";
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
		if (array[i] < 0)
		{
			sum_1 += array[i];
		}
		if (i % 2 == 0)
			product_2 *= array[i];
	}
	float min = array[0], max = array[0];
	int min_index = 0, max_index = 0, first_index = 0, last_index = 0;
	for (int i = 1; i < size; i++)
	{
		if (array[i] < min) {
			min = array[i];
			min_index = i;
		}
		if (array[i] > max) {
			max = array[i];
			max_index = i;
		}
	}
	if (min_index < max_index)
	{
		for (int i = min_index + 1; i < max_index; i++)
		{
			product_1 *= array[i];
		}
	}
	else {
		for (int i = max_index + 1; i < min_index; i++)
		{
			product_1 *= array[i];
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (array[i] < 0)
		{
			first_index = i;
			break;
		}
	}
	for (int i = 5; i >= 0; i--)
	{
		if (array[i] < 0)
		{
			last_index = i;
			break;
		}
	}
	for (int i = first_index + 1; i < last_index; i++)
	{
		sum_2 += array[i];
	}
	cout << "The results are: ";
	cout << "\n* " << sum_1;
	cout << "\n* " << product_1;
	cout << "\n* " << product_2;
	cout << "\n* " << sum_2;
	return 0;
}