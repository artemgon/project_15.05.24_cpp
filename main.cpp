#include <iostream>
using namespace std;

int main() {
	const int size = 6;
	int ar[size];
	cout << "Please, enter the elements: ";
	for (int i = 0; i < size; i++)
	{
		cin >> ar[i];
	}
	cout << "The result is: ";
	for (int i = size - 1; i >= 0; i--)
	{
		cout << ar[i] << " ";
	}
	return 0;
}