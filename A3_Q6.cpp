#include <iostream>
using namespace std;

int main() {
		
		int num;
		cout<<"Enter a year:";
		cin>>num;
		if(num%4==0)
			cout<<"Entered year is a leap year";	
		else 
			cout<<"Entered year is not a leap year";	
		return 0;
}
