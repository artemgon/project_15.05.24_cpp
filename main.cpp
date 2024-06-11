#include <iostream>
using namespace std;

int main() {
	const int size = 6;
	int profit[size], sum = 0;
	for (int i = 0; i < size; i++)
	{
		cout << "Please, enter the profit in the " << i + 1 << "th month: ";
		cin >> profit[i];
		sum += profit[i];
	}
	cout << "The profit is: " << sum;
	return 0;
}