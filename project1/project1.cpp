#include <iostream>
using namespace std;

int main()
{
	int totalMoney;
	int banknoteValue;

	cout << "Please introduce an amount of money: " << endl;
	cin >> totalMoney;
	cout << "Please introduce the value of the banknote: " << endl;
	cin >> banknoteValue;

	int banknotes=0;
/*
	while (totalMoney >= 50)
	{
		totalMoney -= 50;
		banknotes++;

	}
	*/

	for ( banknotes = 0; totalMoney>= banknotes ; banknotes++)
	{
		totalMoney = totalMoney -banknoteValue;
	}
	cout << "number of banknotes: " << banknotes << endl;

	return 0;
}