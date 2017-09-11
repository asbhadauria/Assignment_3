#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num1,num2,lcm;
	cout<<"Enter first Number:"<<endl;
	cin>>num1;
	cout<<"Enter second Number:"<<endl;
	cin>>num2;
	for(int i=max(num1,num2);;i++)
		if(i%num1==0 && i%num2==0){
			lcm=i;
			break;
		}
	cout<<"LCM of the 2 Numbers:"<<lcm;	
	return 0;
}