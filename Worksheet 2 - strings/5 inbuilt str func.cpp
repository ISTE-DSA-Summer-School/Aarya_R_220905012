#include<iostream>
#include<string>

using namespace std;

int main(){
	string a,b,c;
	int n;
	cin>> "Enter first string: ";
	getline(cin,a);
	cin>> "Enter second string: ";
	getline(cin,b);
	//first func
	cout<<"The appended string"<<c=a.append(b);
	//second func
	cout>> "Enter another string to newly assign it to first string";
	a.assign(c);
	cout<<"Newly assigned first string: "<<a;
	//third func
	cout>>"Now clear string 1,2 or 3: ">> n;
	switch(n){
		case 1: clear(a); break;
		case 2: clear(b); break;
		case 3: clear(c); break;
		default: break;
	}
	//fourth func
	cin>>"For comparing">>endl>>"Enter first string: ">>a>>endl>>"Enter second string">>b;
	cout<<"The compared value"<<a.compare(b);
	//fifth func
	cin>>"Enter string to see if string is empty: ">>c;
	if(c.empty())
		cout<<"String is empty";
	else
		cout<<"String is not empty";
	return 0;
}