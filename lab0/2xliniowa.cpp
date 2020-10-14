#include <iostream>
using namespace std;

int main() {
	
	float a1,a2,b1,b2,c1,c2,x,y;
	cout<<"give me a1: ";
	cin>>a1;
	cout<<"give me b1: ";
	cin>>b1;
	cout<<"give me c1: ";
	cin>>c1;
	cout<<"give me a2: ";
	cin>>a2;
	cout<<"give me b2: ";
	cin>>b2;
	cout<<"give me c2: ";
	cin>>c2;
	
	y=((c2*a1)-(a2*c1))/((a1*b2)-(a2*b1));
	x=(c1-(b1*y))/a1;
	
	cout<<"x:"<<x<<endl;
	cout<<"y:"<<y<<endl;
	
	return 0;
}
