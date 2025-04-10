#include <iostream>
using namespace std;

int main(){
	float m;
	cout<<"enter the total number (0-100) : ";
	cin>>m;
	if(m>=90)
	cout<<"your grade is [A]"<<endl;
	else if(m>=80)
	cout<<"your grade is [B]"<<endl;
	else if(m>=70)
	cout<<"your grade is [C]"<<endl;
	else
	cout<<"your grade is [D]"<<endl;
	return 0;
}
