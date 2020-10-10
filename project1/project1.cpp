#include <iostream>
#include <array>
#include <cstdlib>
using namespace std;

int main()
{
	array<int, 10> data = {58,4,5,6,3,8,2,9,15,7};
	int smallest=data[0];

	for (int i = 0; i < 10; i++)
	{
		if (data[i] < smallest)
		{
			smallest = data[i];
		}
	}
	cout << "Smalest number is: " <<smallest<<endl;

	return 0;
}