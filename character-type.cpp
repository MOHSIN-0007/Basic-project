#include <iostream>
using namespace std;

int main() {
	char a;
	cout<<"enter a single character: ";
	cin>>a;
	if(a>='0' && a<='9')
		cout<<a<<" is a digit"<<endl;
	else if(a>='A' && a<='Z')
		cout<<a<<" is a Uppercase letter"<<endl;
	else if(a>='a' && a<='z')
		cout<<a<<" is a Lowercase latter"<<endl;
	else {
		cout<<a<<" is a special character"<<endl;
	}
	cout<<"invaild! please enter single character";
	return 0;
}
