#include <iostream>
using namespace std;

int main() {
	int a1,a2,a3;
	cout<<"Enter the angles of the triangle";
	cin>>a1>>a2>>a3;
	if((a1+a2+a3)==180)
		cout<<"Valid angles for a traingle";
	else
		cout<<"Invalid Angles for a traingle";
	return 0;
}
