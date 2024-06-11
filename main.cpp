#include <iostream>
using namespace std;

int main() {
	srand(time(0));
	const int size = 5;
	int array[size], min, max, i = 0;
	for (; i < size; i++){
		array[i] = rand() % 20 - 10;
		cout << array[i] << " ";
	}
	min = max = array[0];
	for (i = 1; i < size; i++) {
		if (array[i] < min)
			min = array[i];
		if (array[i] > max)
			max = array[i];
	}
	cout << "\nMin: " << min << "\nMax: " << max;
	return 0;
}