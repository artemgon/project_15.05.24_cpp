#include <iostream>
using namespace std;

int main() {
	srand(time(0));
	const int SIZE = 8;
	int array[SIZE];
	for (int i = 0; i < SIZE; i++){
		array[i] = rand() % 600 - 300;
		cout << array[i] << " ";
	}
	int min, max;
	min = max = array[0];
	for (int i = 0; i < SIZE; i++) {
		if (array[i] < min)
			min = array[i];
		if (array[i] > max)
			max = array[i];
	}
	cout << "\nMin: " << min << endl; 
	cout << "Max: " << max << endl;
	return 0;
}