#include <iostream>
using namespace std;

int main()
{
	int myNumb;
	float a,b,c;

	cout << "please introduce a " << endl;
	cin >> a;
	cout << "please introduce b " << endl;
	cin >> b;
	cout << "please introduce c " << endl;
	cin >> c;

	float x = (c - b) / a;

	cout << "The x is " << x << "! " << "More stuff!" << endl;








	/*
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
	*/
	return 0;
}