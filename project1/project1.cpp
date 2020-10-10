#include <iostream>
using namespace std;

int main()
{
	int totalMoney;

	cout << "Please introduce an amount of money: " << endl;
	cin >> totalMoney;

	int banknotes=0;

	while (totalMoney >= 50)
	{
		totalMoney -= 50;
		banknotes++;

	}
	cout << "number of banknotes: " << banknotes << endl;

	return 0;
}