#include <iostream>
using namespace std;

int main() {
	const int size = 12;
	int months[size], i = 0;
	cout << "Please, enter the profit in every month of year: ";
	for (; i < size; i++)
	{
		cin >> months[i];
	}
	int start, end;
	cout << "Range min. value: ";
	cin >> start;
	cout << "Range max. value: ";
	cin >> end;
	int max = months[start - 1], min = months[start - 1], min_month = start, max_month = start;
	for (i = start; i < end; i++)
	{
		if (months[i] < min)
		{
			min = months[i];
			min_month = i + 1;
		}
		if (months[i] > max)
		{
			max = months[i];
			max_month = i + 1;
		}
	}
	cout << "Max: " << max_month << "th month";
	cout << "\nMin: " << min_month << "th month";
	return 0;
}