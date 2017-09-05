#include <iostream>
using namespace std;

int main() {
		
		int num;
		cout<<"Enter month number:";
		cin>>num;
		if(num==1 || num==3 || num==5 || num==7 || num==8 || num==10 || num==12) 
			cout<<"31";	
		else if(num==4 || num==6 || num==5 || num==9 || num==11)  
			cout<<"30";
		else if(num==2)  
			cout<<"29";	
		else 
			cout<<"Invalid Entry";
		return 0;
}
