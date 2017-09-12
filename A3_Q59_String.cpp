#include <iostream>
using namespace std;

int main() {
	
	string str,str1,str2;char ch;bool flag=true;
	cout<<"Enter your Binary representation";
	cin>>str;
	for(int i=0;i<=(str.length()-1);i++){
		ch=str[i];
		if(ch=='0')
			str1+='1';
		else if(ch=='1')
			str1+='0';
		else
			cout<<"Invalid Input";
	}
	cout<<"1's complement:"<<str1<<endl;
	for(int i=(str.length()-1);i>=0;i--){
		ch=str1[i];
		if(flag)
			if(ch=='0'){
				str2='1'+str2;
				flag=false;
			}
			else
				str2='0'+str2;
		else
			str2=ch+str2;
	}
	cout<<"2's complement:"<<str2;
	return 0;
}