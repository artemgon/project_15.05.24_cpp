#include <iostream>
using namespace std;

int main() {
	const int size = 5;
	int sides[size], perimeter = 0;
	cout << "Please, enter the sides of pentagon: ";
	for (int i = 0; i < size; i++)
	{
		cin >> sides[i];
		perimeter += sides[i];
	}
	cout << "The perimeter is: " << perimeter;
	return 0;
}