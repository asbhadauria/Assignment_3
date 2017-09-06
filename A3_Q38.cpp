#include <iostream>
using namespace std;

int main() {
	int num,rev,dummy;
	cout<<"Enter your number:";
	cin>>num;
	dummy=num;
	while(num>0)
		{
			rev=(rev*10)+(num%10);
			num/=10;
		}
		if(rev==dummy)
			cout<<"Palindrome Number";
		else
			cout<<"Not a Palindrome Number";
	return 0;
}