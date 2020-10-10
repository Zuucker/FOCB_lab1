#include <iostream>
using namespace std;

int main()
{
	int times;

	cout<<"Please introduce the number of times you want to "<<endl;
	cout<<"repeat the sentence: "<<endl;
	cin >> times;

	for (int i = 0; i < times; i++)
	{
		cout << "this is an exaple" << endl;
	}

	return 0;
}