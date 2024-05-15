#include <iostream>
using namespace std;

int main() {
	int first_month;
	cout << "Please, enter the amount of money earned during the first month:";
	cin >> first_month;
	int second_month;
	cout << "Please, enter the amount of money earned during the second month:";
	cin >> second_month;
	int third_month;
	cout << "Please, enter the amount of money earned during the third month:";
	cin >> third_month;
	int fourth_month;
	cout << "Please, enter the amount of money earned during the fourth month:";
	cin >> fourth_month;
	int fifth_month;
	cout << "Please, enter the amount of money earned during the fifth month:";
	cin >> fifth_month;
	int sixth_month;
	cout << "Please, enter the amount of money earned during the sixth month:";
	cin >> sixth_month;
	int income[6] = {first_month, second_month, third_month, fourth_month, fifth_month, sixth_month};
	int sum = 0;
	int size = 6;
	for (int i = 0; i < size; i++)
	{
		sum = sum + income[i];
	}
	cout << "The income is: " << sum;
	return 0;
}