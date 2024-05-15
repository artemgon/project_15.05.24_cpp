#include <iostream>
using namespace std;

int main() {
	cout << "Please, enter the income of every month:";
	int month_1, month_2, month_3, month_4, month_5, month_6, month_7, month_8, month_9, month_10, month_11, month_12;
	cin >> month_1 >> month_2 >> month_3 >> month_4 >> month_5 >> month_6 >> month_7 >> month_8 >> month_9 >> month_10 >> month_11 >> month_12;
	int array[12] = { month_1, month_2, month_3, month_4, month_5, month_6, month_7, month_8, month_9, month_10, month_11, month_12 };
	int min, max;
	min = max = array[0];
	for (int i = 0; i < 12; i++) {
		if (array[i] < min) {
			min = array[i];
		}
		if (array[i] > max) {
			max = array[i];
		}
	}
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;
	return 0;
}