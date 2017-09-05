#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float a,b,c;
	float r1,r2;
	cout<<"Enter the coefficients in decreasing order of variable power";
	cin>>a>>b>>c;
	r1=(((-1*b)+(sqrt((b*b)-(4*a*c))))/2);
	r2=(((-1*b)-(sqrt((b*b)-(4*a*c))))/2);
	cout<<"Roots:"<<r1<<" , "<<r2;
	return 0;
}
