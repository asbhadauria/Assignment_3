#include <iostream>
using namespace std;

int main() {
		
		int amt,c_1000,c_500,c_100,c_50,c_20,c_10,c_5,c_2,c_1;
		cout<<"Enter amount:";
		cin>>amt;
		c_1000=amt/1000;
		amt-=(c_1000*1000);
		c_500=amt/500;
		amt-=(c_500*500);
		c_100=amt/100;
		amt-=(c_100*100);
		c_50=amt/50;
		amt-=(c_50*50);
		c_20=amt/20;
		amt-=(c_20*20);
		c_10=amt/10;
		amt-=(c_10*10);
		c_5=amt/5;
		amt-=(c_5*5);
		c_2=amt/2;
		amt-=(c_2*2);
		c_1=amt/1;
		amt-=(c_1*1);
		cout<<"Number of 1000 rupee notes:"<<c_1000<<"\n";
		cout<<"Number of 500 rupee notes:"<<c_500<<"\n";
		cout<<"Number of 100 rupee notes:"<<c_100<<"\n";
		cout<<"Number of 50 rupee notes:"<<c_50<<"\n";
		cout<<"Number of 20 rupee notes:"<<c_20<<"\n";
		cout<<"Number of 10 rupee notes:"<<c_10<<"\n";
		cout<<"Number of 5 rupee notes:"<<c_5<<"\n";
		cout<<"Number of 2 rupee notes:"<<c_2<<"\n";
		cout<<"Number of 1 rupee notes:"<<c_1<<"\n";
		cout<<"Total number of notes:"<<(c_1000+c_500+c_100+c_50+c_20+c_10+c_5+c_2+c_1);
		return 0;
}
