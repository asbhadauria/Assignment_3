#include <iostream>
using namespace std;

int main() {
		
		int num;
		cout<<"Enter a number:";
		cin>>num;
		if(num%5==0 && num%11==0)
			cout<<"Entered number is divisible by both 5 and 11";	
		else 
			cout<<"Entered number is not divisible by both 5 and 11";	
		return 0;
}
