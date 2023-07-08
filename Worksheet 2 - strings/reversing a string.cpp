#include<iostream>
#include<string>

using namespace std;

int main{
	string a;
	int n;
	char temp;
	cin>>"Enter string of that size: ">>a;
	n=a.size()
	for(int i=0; i<n/2; i++){
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
	cout<<"Reversed String is: "<<a;
	return 0;
}