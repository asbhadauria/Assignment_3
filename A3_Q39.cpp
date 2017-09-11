#include <iostream>
using namespace std;

int main() {
	int num,dummy;
	int rem,freq;
	cout<<"Enter Your Number";
	cin>>num;
	dummy=num;
	for(int i=0;i<=9;i++){
		while(num>0){
			rem=num%10;
			if(rem==i)
				freq++;
			num/=10;	
		}
	cout<<"Frequency of "<<i<<"in "<<dummy<<":"<<freq<<"\n";
	freq=0;
	num=dummy;
	}
	return 0;
}