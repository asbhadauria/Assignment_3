#include <iostream>
using namespace std;

int main() {
	int s1,s2,s3;
	cout<<"Enter the sides of the triangle";
	cin>>s1>>s2>>s3;
	if((s1+s2)>s3 && (s1+s3)>s2 && (s2+s3)>s1)
		cout<<"Valid sides for a traingle";
	else 
		cout<<"Invalid siides";
	return 0;
}
