#include <iostream>
using namespace std;

int main() {
	cout << "Please, enter the sizes of pentagon sides:";
	int side_1;
	cin >> side_1;
	int side_2;
	cin >> side_2;
	int side_3;
	cin >> side_3;
	int side_4;
	cin >> side_4;
	int side_5;
	cin >> side_5;
	int array[5] = { side_1, side_2, side_3, side_4, side_5 };
	int perimeter = 0;
	for (int i = 0; i < 5; i++)
	{
		perimeter = perimeter + array[i];
	}
	cout << "The perimeter is " << perimeter;
	return 0;
}