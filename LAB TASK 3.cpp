#include<iostream>
using namespace std;
int main()
{
	int age;
	cin>>age;
	bool hasID=true;
	if(age>=18){
		if(hasID){
			cout<<"ENTRY ALLOWED"<<endl;
		}
		else{
			cout<<"PLEASE SHOW ID."<<endl;
		}		
	}
	else{
		cout<<"underage.ENTRY DENIED."<<endl;
	}
}
