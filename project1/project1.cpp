#include <iostream>
using namespace std;

int main()
{
	int myNumb;
	cout << "Hello World"<<endl;
	cout << "give me a number pls ";
	cin >> myNumb;
	cout << "You gave me a " << myNumb << "!" << endl;
	if (myNumb % 2 == 0) {

		cout << "And the number is even!" << endl;
	}
	else{
		cout << "And the number is odd!" << endl;
	}
	return 0;
}