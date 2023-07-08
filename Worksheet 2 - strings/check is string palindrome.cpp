#include<iostream>
#include<string>

using namespace std;
 
int main(){
	string a;
	int n,i;
	int flag=1;
	cin>> "Enter string to check if palindrome: ">>a;
	n=a.size();
	for(i=0;i<n/2;i++){
		if(a[i]!=a[n-i-1]){
			flag=0;
		}
	}
	if(flag) 
		cout<< "String is a Palindrome";
	else
		cout<< "string is not a Palindrome";
	return 0;
}
