#include <iostream>
using namespace std;

int main() {
	const int size = 12;
	int months[size], min, max;
	cout << "Please, enter the profit in every month of year: ";
	for (int i = 0; i < size; i++)
	{
		cin >> months[i];
	}
	max = min = months[0];
	int max_month = 1, min_month = 1;
	for (int i = 1; i < size; i++)
	{
		if (months[i] < min) {
			min = months[i];
			min_month = i + 1;
		}
		if (months[i] > max) {
			max = months[i];
			max_month = i + 1;
		}
	}
	cout << "Max: " << max_month << "th month";
	cout << "\nMin: " << min_month << "th month";
	return 0;
}