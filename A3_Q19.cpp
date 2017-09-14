#include <iostream>
using namespace std;

int main() {
	int m1,m2,m3,m4,m5,total;float avg;
	cout<<"Enter your marks in Physics:";
	cin>>m1;
	total+=m1;
	cout<<"Enter your marks in Chemistry:";
	cin>>m2;
	total+=m2;
	cout<<"Enter your marks in Mathematics:";
	cin>>m3;
	total+=m3;
	cout<<"Enter your marks in Biology:";
	cin>>m4;
	total+=m4;
	cout<<"Enter your marks in Computer:";
	cin>>m5;
	total+=m5;avg=total/5;
	if(avg>=90)
		cout<<"Total Marks Scored:"<<total<<endl<<"Percentage:"<<avg<<endl<<"Grade:"<<"A";
	else if(avg>=80)
		cout<<"Total Marks Scored:"<<total<<endl<<"Percentage:"<<avg<<endl<<"Grade:"<<"B";
	else if(avg>=70)
		cout<<"Total Marks Scored:"<<total<<endl<<"Percentage:"<<avg<<endl<<"Grade:"<<"C";
	else if(avg>=60)
		cout<<"Total Marks Scored:"<<total<<endl<<"Percentage:"<<avg<<endl<<"Grade:"<<"D";
	else if(avg>=40)
		cout<<"Total Marks Scored:"<<total<<endl<<"Percentage:"<<avg<<endl<<"Grade:"<<"E";
	else
		cout<<"Total Marks Scored:"<<total<<endl<<"Percentage:"<<avg<<endl<<"Grade:"<<"F";
	return 0;
}