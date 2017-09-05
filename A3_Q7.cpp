#include <iostream>
using namespace std;

int main() {
		
		char c;
		cout<<"Enter a character:";
		cin>>c;
		if((c>64 && c<91) || (c>96 && c<123))
			cout<<"Entered character is an alphabet";	
		else 
			cout<<"Entered character is not an alphabet";	
		return 0;
}
