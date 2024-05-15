#include <iostream>
using namespace std;

int main() {
	const int size = 5;
	int array[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = i + 1;
	}
	for (int i = size - 1; i > -1; i--)
	{
		cout << array[i] << " ";
	}
	return 0;
}