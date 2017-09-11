#include <iostream>
using namespace std;

int main() {
	int num,c_num,rem,fact=1,sum_fact;
	cout<<"Enter your Number";
	cin>>num;
	c_num=num;
	while(num>0){
		rem=num%10;
			for(int j=1;j<=rem;j++){
				fact*=j;
			}
		sum_fact+=fact;
		fact=1;	
		num/=10;
	}
	if(sum_fact==c_num)
		cout<<"Strong NUmber";
	else
		cout<<"Not a strong number";
	return 0;
}