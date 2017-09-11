#include <iostream>
using namespace std;

int main() {
	int base,index,res=1;
	cout<<"Enter Base:";
	cin>>base;
	cout<<"Enter Index:";
	cin>>index;
	for(int i=1;i<=index;i++)
		res*=base;
	cout<<"Result:"<<res;
	return 0;
}