#include <iostream>
#include<string>
using namespace std;

int main() {
	string a,b,c,d;
	a="Mohsin";
	b="Mohsin12";
	cout<<"enter the username: ";
	cin>>c;
	cout<<"enter the password: ";
	cin>>d;
	if (c==a && d==b)
		cout<<"\nAccess granted\n"<<endl;
	else
		cout<<"\nAccess Denied! Please enter correct username and password\n"<<endl;

	return 0;


}
