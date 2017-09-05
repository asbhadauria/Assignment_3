#include <iostream>
using namespace std;

int main() {
		
		char c;
		cout<<"Enter a character:";
		cin>>c;
		if(c>96 && c<123) 
			cout<<"Entered alphabet is in LowerCase";	
		else if(c>64 && c<91)  
			cout<<"Entered alphabet is in UpperCase";	
		
		return 0;
}
