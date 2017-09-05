#include <iostream>
using namespace std;

int main() {
	int s1,s2,s3;
	cout<<"Enter the sides of the triangle";
	cin>>s1>>s2>>s3;
	if(s1==s2 && s3==s1)
		cout<<"Equilateral traingle";
	else if((s1==s2)||(s1==s3)||(s2==s3)) 
		cout<<"Isosceles traingle";
	else
		cout<<"Scalene traingle";
	return 0;
}
