#include <iostream>
using namespace std;

int main() {
		
		char c;
		cout<<"Enter a character:";
		cin>>c;
		if((c>64 && c<91) || (c>96 && c<123))
			cout<<"Entered character is an alphabet";	
		else if(c>47 && c<58) 
			cout<<"Entered character is a digit";	
		else 	
			cout<<"Entered character is a special character";
		return 0;
}
