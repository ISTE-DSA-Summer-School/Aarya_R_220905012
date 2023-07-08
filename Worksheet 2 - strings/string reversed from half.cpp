#include<iostream>
#include<string>

using namespace std;

int main(){
	string a;
	int n,l,i;
	cin>> "Enter a string: ">>a;
	n=a.size();
	l=n/2;
	for(i=l-1;i>=0;i--)
		cout<< a[i];
	for(i=n-1;i>=l;i--)
		cout<<a[i];
	return;
}
